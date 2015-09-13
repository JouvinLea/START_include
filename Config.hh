#ifndef _CONFIG_
#define _CONFIG_

// STL
#include <vector>
#include <utility>

// ROOT
#include <TString.h>
#include <TObject.h>

namespace START {
  
/**
 * \brief Class with informations about the minimization's parameters via the .config file and the .list file
 *
 * Contains all the information about the configuration in the .config file
 * and about the runs' number in the file listname
 *
 * \warning This system is a bit annoying and unflexible... Maybe we should use a system as the Utilities::ConfigHandler of H.E.S.S. ?
 *
 * \author HAP-Fr team
 */
  
  class Config : public TObject
  {
  
  public :
    Config(TString file_config, Bool_t readlistnow=true);
    Config(); // ROOT
    ~Config();

    int ReadConfig(TString file_config);
    int ReadList(TString listname);
    void PrintConfig(); // *MENU*
    void PrintRunList();
    void PrintInputFileList();
    //    virtual void Print(Option_t *option="") const;
    // Get functions
    TString GetUserInstrumentResponseAddress() const { return fUserInstrumentResponseAddress;}
    TString GetFileConfig() const {return fFileConfig;}
    TString GetFileList() const {return fFileList;}
    TString GetUserCodeVersion() const {return fUserCodeVersion;}
    Bool_t GetUserUseInputFileList() const {return fUserUseInputFileList;}
    TString GetUserRunListsFolderAddress() const {return fUserRunListsFolderAddress;}
    TString GetUserRunListFileBaseName() const {return fUserRunListFileBaseName;}
    TString GetUserRootFilesFolderAddress() const {return fUserRootFilesFolderAddress;}
    TString GetUserAnalysisConfig() const {return fUserAnalysisConfig;}
    TString GetUserAnalysisConfigType() const {return fUserAnalysisConfigType;}
    TString GetUserForceAreaAnalysisConfig() const {return fUserForceAreaAnalysisConfig;}
    TString GetUserMcProductionName() const {return fUserMcProductionName;}
    TString GetUserOutputFolderName() const {return fUserOutputFolderName;}
    double GetUserMaxCosZenBinWidth() const {return fUserMaxCosZenBinWidth;}
    double GetUserZenithMax() const {return fUserZenithMax;}
    double GetUserOffsetMax() const {return fUserOffsetMax;}
    double GetUserERangeMin() const {return fUserERangeMin;}
    double GetUserERangeMax() const {return fUserERangeMax;}
    int GetUserERangeBinsNumber() const {return fUserERangeBinsNumber;}
    double GetUserFitEMin() const {return fUserFitEMin;}
    double GetUserFitEMax() const {return fUserFitEMax;}
    double GetUserAreaMin() const {return fUserAreaMin;}
    double GetUserSkipHighThreshRuns() const {return fUserSkipHighThreshRuns;}
    int GetUserAutomaticFit() const {return fUserAutomaticFit;}
    Bool_t GetUserIsMc() const {return fUserIsMc;}
    double GetUserTmin() const {return fUserTmin;}
    Bool_t GetUserDraw() const {return fUserDraw;}
    Bool_t GetUserVerbose() const {return fUserVerbose;}
    std::vector<unsigned int> GetUserAddHypothesis() const {return fUserAddHypothesis;}

    double GetUserEref() const {return fUserEref;}
    std::vector<std::pair<double,double> > GetUserMJDwindow() const {return fUserMJDwindow;}

    std::pair<double,double> GetUserHypothesisIntegrationEnergyRange() const {return fUserHypothesisIntegrationEnergyRange;};
    std::vector<double> GetUserHypothesisRebin() const {return fUserHypothesisRebin;}
    bool GetUserHypothesisComparison() const {return fUserHypothesisComparison;};

    TString GetUserSourceName() const {return fUserSourceName;};
    bool GetUserDrawDataSummaryPlots() const {return fUserDrawDataSummaryPlots;};
    bool GetUserDrawPlots() const {return fUserDrawPlots;};
    unsigned int GetUserPlotStyle() const {return fUserPlotStyle;};
    bool GetUserFitResultsDrawing() const {return fUserFitResultsDrawing;};
    std::vector<unsigned int> GetUserButterfly() const {return fUserButterfly;}
    unsigned int GetUserComputeContours() const {return fUserComputeContours;};
    unsigned int GetUserContoursNumberOfPoints() const {return fUserContoursNumberOfPoints;};
    unsigned int GetUserComputeScanLikelihood() const {return fUserComputeScanLikelihood;};
    unsigned int GetUserMinimizationLevel() const {return fUserMinimizationLevel;};

    std::pair<double,double> GetUserLightCurveTimeRange() {return fUserLightCurveTimeRange;};
    double GetUserLightCurveTimeInterval() {return fUserLightCurveTimeInterval;};
    std::pair<double,double> GetUserLightCurveIntegratedFluxEnergyRange() {return fUserLightCurveIntegratedFluxEnergyRange;};
    std::vector<unsigned int> GetUserLightCurveTimeCuttingType() {return fUserLightCurveTimeCuttingType;};
    std::vector<std::pair<double,double> > GetUserLightCurveUserTimeIntervals() {return fUserLightCurveUserTimeIntervals;};
    unsigned int GetUserLightCurveTimeAxisUnits() {return fUserLightCurveTimeAxisUnits;};
    std::vector<unsigned int> GetUserLightCurveErrorsHandling() {return fUserLightCurveErrorsHandling;};

    TString GetUserOutputRootFileName() {return fUserOutputRootFileName;};

    std::vector<int> GetRunList() const {return fRunList;};
    std::vector<unsigned int> GetAllowedTelList() const {return fAllowedTelList;};
    std::vector<std::string> GetInputFileList() const {return fInputFileList;};


    // Set functions
    void SetUserInstrumentResponseAddress(TString UserInstrumentResponseAddress) 
    {fUserInstrumentResponseAddress=UserInstrumentResponseAddress;}
    void SetUserCodeVersion(TString UserCodeVersion) 
    {fUserCodeVersion=UserCodeVersion;}
    void SetUserUseInputFileList(Bool_t UserUseInputFileList) 
    {fUserUseInputFileList=UserUseInputFileList;}
    void SetUserRunListsFolderAddress(TString UserRunListsFolderAddress) 
    {fUserRunListsFolderAddress=UserRunListsFolderAddress;}
    void SetUserRunListFileBaseName(TString UserRunListFileBaseName) 
    {fUserRunListFileBaseName=UserRunListFileBaseName;}
    void SetUserRootFilesFolderAddress(TString UserRootFilesFolderAddress) 
    {fUserRootFilesFolderAddress=UserRootFilesFolderAddress;}
    void SetUserAnalysisConfig(TString UserAnalysisConfig) 
    {fUserAnalysisConfig=UserAnalysisConfig;}
    void SetUserAnalysisConfigType(TString UserAnalysisConfigType) 
    {fUserAnalysisConfigType=UserAnalysisConfigType;}
    void SetUserForceAreaAnalysisConfig(TString UserForceAreaAnalysisConfig) 
    {fUserForceAreaAnalysisConfig=UserForceAreaAnalysisConfig;}
    void SetUserMcProductionName(TString UserMcProductionName) 
    {fUserMcProductionName=UserMcProductionName;}
    void SetUserOutputFolderName(TString UserOutputFolderName) 
    {fUserOutputFolderName=UserOutputFolderName;}
    void SetUserMaxCosZenBinWidth(double UserMaxCosZenBinWidth) 
    {fUserMaxCosZenBinWidth=UserMaxCosZenBinWidth;}
    void SetUserZenithMax(double UserZenithMax) 
    {fUserZenithMax=UserZenithMax;}
    void SetUserOffsetMax(double UserOffsetMax) 
    { fUserOffsetMax=UserOffsetMax;}
    void SetUserERangeMin(double Emin) {fUserERangeMin = Emin;}
    void SetUserERangeMax(double Emax) {fUserERangeMax = Emax;}
    void SetUserERangeBinsNumber(int UserERangeBinsNumber) 
    { fUserERangeBinsNumber=UserERangeBinsNumber;}
    void SetUserFitEMin(double UserFitEMin) 
    { fUserFitEMin=UserFitEMin;}
    void SetUserFitEMax(double UserFitEMax) { fUserFitEMax=UserFitEMax;}
    void SetUserAreaMin(double UserAreaMin) 
    { fUserAreaMin=UserAreaMin;}
    void SetUserSkipHighThreshRuns(double UserSkipHighThreshRuns) 
    { fUserSkipHighThreshRuns=UserSkipHighThreshRuns;} // VIM : Should be boolean ?
    void SetUserAutomaticFit(int UserAutomaticFit) 
    { fUserAutomaticFit=UserAutomaticFit;}
    void SetUserIsMc(Bool_t UserIsMc) 
    { fUserIsMc=UserIsMc;}
    void SetUserTmin(double UserTmin) 
    { fUserTmin=UserTmin;}
    void SetUserDraw(Bool_t UserDraw) 
    { fUserDraw=UserDraw;}
    void SetUserVerbose(Bool_t UserVerbose) 
    { fUserVerbose=UserVerbose;}
    void SetUserAddHypothesis(unsigned int UserHyp) 
    { fUserAddHypothesis.push_back(UserHyp);}
    void SetUserEref(double UserEref) 
    { fUserEref=UserEref;}
    void SetUserMJDwindow(double mjdmin, double mjdmax) 
    { fUserMJDwindow.push_back(std::make_pair<double,double>(mjdmin,mjdmax));};

    void SetUserHypothesisIntegrationEnergyRange(double emin, double emax) 
    {fUserHypothesisIntegrationEnergyRange = std::make_pair(emin,emax);};
    void SetUserHypothesisRebin(double UserHypothesisRebin) 
    { fUserHypothesisRebin.push_back(UserHypothesisRebin);}
    void SetUserHypothesisComparison(bool UserHypothesisComparison) 
    {fUserHypothesisComparison=UserHypothesisComparison;};

    void SetUserSourceName(TString UserSourceName) 
    {fUserSourceName=UserSourceName;};
    void SetUserDrawDataSummaryPlots(bool UserDrawDataSummaryPlots) 
    {fUserDrawDataSummaryPlots=UserDrawDataSummaryPlots;};
    void SetUserDrawPlots(bool UserDrawPlots) 
    {fUserDrawPlots=UserDrawPlots;};
    void SetUserPlotStyle(bool UserPloStyle) 
    {fUserPlotStyle=UserPloStyle;};
    void SetUserFitResultsDrawing(bool UserFitResultsDrawing) 
    {fUserFitResultsDrawing=UserFitResultsDrawing;};
    void SetUserButterfly(unsigned int UserButterfly) 
    {fUserButterfly.push_back(UserButterfly);};
    void SetUserComputeContours(unsigned int UserComputeContours) 
    {fUserComputeContours=UserComputeContours;};
    void SetUserContoursNumberOfPoints(unsigned int UserContoursNumberOfPoints) 
    {fUserContoursNumberOfPoints=UserContoursNumberOfPoints;};
    void SetUserComputeScanLikelihood(unsigned int UserComputeScanLikelihood) 
    {fUserComputeScanLikelihood=UserComputeScanLikelihood;};
    void SetUserMinimizationLevel(unsigned int UserMinimizationLevel) 
    {fUserMinimizationLevel=UserMinimizationLevel;};

    void SetUserLightCurveTimeRange(double time1, double time2) 
    {fUserLightCurveTimeRange=std::make_pair(time1,time2);};
    void SetUserLightCurveTimeInterval(double UserLightCurveTimeInterval) 
    {fUserLightCurveTimeInterval=UserLightCurveTimeInterval;};
    void SetUserLightCurveTimeCuttingType(unsigned int UserLightCurveTimeCuttingType) 
    {fUserLightCurveTimeCuttingType.push_back(UserLightCurveTimeCuttingType);};
    void SetUserLightCurveIntegratedFluxEnergyRange(double emin, double emax) 
    {fUserLightCurveIntegratedFluxEnergyRange=std::make_pair(emin,emax);};
    void SetUserLightCurveUserTimeIntervals(double tmin, double tmax) 
    {fUserLightCurveUserTimeIntervals.push_back(std::make_pair(tmin,tmax));};
    void SetUserLightCurveTimeAxisUnits(unsigned int units)
    {fUserLightCurveTimeAxisUnits=units;};
    void SetfUserLightCurveErrorsHandling(unsigned int UserLightCurveErrorsHandling) 
    {fUserLightCurveErrorsHandling.push_back(UserLightCurveErrorsHandling);};

    void SetUserOutputRootFileName(TString UserOutputRootFileName)
    {fUserOutputRootFileName=UserOutputRootFileName;};

  private :
    //filename
    TString fFileConfig;
    TString fFileList;

    // Config variables
    TString fUserCodeVersion;
    Bool_t fUserUseInputFileList; ///< use input file list instead of run list
    TString fUserRunListsFolderAddress;
    TString fUserRunListFileBaseName;
    TString fUserInstrumentResponseAddress;
    TString fUserRootFilesFolderAddress;
    TString fUserAnalysisConfig;
    TString fUserAnalysisConfigType; //MPA: maybe not needed! (I'm using fUserMcProductionName instead!)
    TString fUserForceAreaAnalysisConfig;
    TString fUserMcProductionName;
    TString fUserOutputFolderName;
    double fUserMaxCosZenBinWidth;
    double fUserZenithMax;
    double fUserOffsetMax;
    double fUserERangeMin;
    double fUserERangeMax;
    int fUserERangeBinsNumber;
    double fUserFitEMin;
    double fUserFitEMax;
    double fUserAreaMin;
    double fUserSkipHighThreshRuns;
    int fUserAutomaticFit;
    Bool_t fUserIsMc;
    double fUserTmin;
    Bool_t fUserDraw;
    Bool_t fUserVerbose;
    std::vector<unsigned int> fUserAddHypothesis;
    double fUserEref;
    std::vector<std::pair<double,double> > fUserMJDwindow;
    // A implementer
    std::pair<double,double> fUserHypothesisIntegrationEnergyRange; ///< integration energy range
    std::vector<double> fUserHypothesisRebin; ///< significance in each bin for rebinning
    bool fUserDrawDataSummaryPlots; ///< draw summary plots
    bool fUserDrawPlots; ///< plot spectrum and co
    unsigned int fUserPlotStyle;
    bool fUserFitResultsDrawing; ///< draw fit results with a TF1
    TString fUserSourceName; ///< name of the source
    bool fUserHypothesisComparison; ///< comparison between hypothesis
    std::vector<unsigned int> fUserButterfly; ///< type of butterfly

    unsigned int fUserComputeContours;
    unsigned int fUserContoursNumberOfPoints;
    unsigned int fUserComputeScanLikelihood;
    unsigned int fUserMinimizationLevel;

    std::vector<unsigned int> fUserLightCurveTimeCuttingType;
    std::pair<double,double> fUserLightCurveTimeRange;
    double fUserLightCurveTimeInterval;
    std::pair<double,double> fUserLightCurveIntegratedFluxEnergyRange;
    std::vector<std::pair<double,double> > fUserLightCurveUserTimeIntervals;
    unsigned int fUserLightCurveTimeAxisUnits;
    std::vector<unsigned int> fUserLightCurveErrorsHandling;

    std::vector<int> fRunList; ///< vector containing runs
    std::vector<unsigned int> fAllowedTelList; ///< vector containing allowed runs
    std::vector<std::string> fInputFileList; ///< vector containing files

    TString fUserOutputRootFileName;

#ifdef CONSTRUCT_LIBRARY
  public:
    ClassDef(START::Config,1);
#endif
  
  };
}

#endif
