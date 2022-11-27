//---------------------------------------------------------------------------

#ifndef UnitMainH
#define UnitMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ToolWin.hpp>
#include <VCLTee.Chart.hpp>
#include <VCLTee.Series.hpp>
#include <VclTee.TeeGDIPlus.hpp>
#include <VCLTee.TeEngine.hpp>
#include <VCLTee.TeeProcs.hpp>
#include <jpeg.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
        TOpenDialog *dlgOpen;
        TSaveDialog *dlgSave;
        TChart *chartSource;
        TChart *chartDest;
        TPanel *pnImgSource;
        TImage *imgSource;
        TPanel *pnImgDest;
        TImage *imgDest;
        TToolBar *tbMain;
        TPanel *pnSMag;
        TPanel *pnDMag;
	TBarSeries *Series1;
	TBarSeries *Series2;
	TMainMenu *MainMenu1;
	TMenuItem *Deschide1;
	TMenuItem *Deschide2;
	TMenuItem *ransforma1;
	TComboBox *cbxHistoType;
	TSpeedButton *btnLoad;
	TSpeedButton *btnSave;
	TSpeedButton *btnExecute;
	TSpeedButton *btnMagnifier;
	TImage *Image1;
	TImage *Image2;
	TMenuItem *Inversareculori1;
	TMenuItem *Detectiamuchiilor1;
	TMenuItem *InformatiiAutor1;
        void __fastcall btnExecuteClick(TObject *Sender);
        void __fastcall mnExitClick(TObject *Sender);
        void __fastcall FormResize(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall btnMagnifierClick(TObject *Sender);
        void __fastcall imgSourceMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall imgDestMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
	void __fastcall Deschide1Click(TObject *Sender);
	void __fastcall Deschide2Click(TObject *Sender);
	void __fastcall ransforma1Click(TObject *Sender);
	void __fastcall btnLoadClick(TObject *Sender);
	void __fastcall btnSaveClick(TObject *Sender);
	void __fastcall Inversareculori1Click(TObject *Sender);
	void __fastcall Detectiamuchiilor1Click(TObject *Sender);
	void __fastcall InformatiiAutor1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMainForm(TComponent* Owner);
        void __fastcall DrawSourceHistogram();
		void __fastcall DrawDestHistogram();
        void __fastcall ConvertToGrayScale();
        void EqualizeHistoM1( Graphics::TBitmap* Source, int LUT[256], bool ReCalculateHistogram );
        void EqualizeHistoM2( Graphics::TBitmap* Source, int LUT[256] );
        void EqualizeHistoM3( Graphics::TBitmap* Source, int LUT[256] );
        void EqualizeHistoM4( Graphics::TBitmap* Source, Graphics::TBitmap* Dest );
        void EqualizeHistoAdaptive( Graphics::TBitmap* Source, Graphics::TBitmap* Dest );
        void TransHisto( Graphics::TBitmap* Source, int LUT[256] );
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
