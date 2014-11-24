#ifndef _CHECKFIT_
#define _CHECKFIT_


#include <iostream>
#include <vector>
#include <map>
#include <utility>

//root
#include "TROOT.h"
#include "TMath.h"
#include "TRandom.h"
#include "TRandom3.h"
#include "TSystem.h"
#include "TDirectory.h"
#include "Math/QuantFuncMathCore.h"
#include "TUUID.h"

#include "ComputeResults.hh"
#include "Band.hh"
#include "MinimizeFactory.hh"
#include "Hypothesis.hh"
#include "BandsFactory.hh"

namespace START {
  /**
   *This class is used to remplace the ON of the Data by a poissonian distribution in each bands (zenith, offset, area and energy).
   *The mean of the ON in each Band is obtained by calculating the mean of the signal and the mean of the background in the ON.
   *The mean of the signal is calculated with the functionExpectedExcess of the computeResult Class in using the fittedparameters of the law used in Startfit.
   *the mean of the background in each band is calculated by using the formula: alpha_iband * N_OFF
   */ 
  class CheckFit_MC 
  {
    
  public :
    CheckFit_MC(BandsFactory &BandsFact ,std::vector<Band> &BandArray, Hypothesis &hypo); // use in the FCN
    ~CheckFit_MC();
    void N_On_MC(std::vector<Band> &BandArray);
    //inline std::vector<Band> Get_band()   const  { return fBandArray;}
  

  private :
  
    // object TRandom 
    TRandom3 trandom;

    Hypothesis *fHypothesis; ///< Hypothesis

    ComputeResults *fCompRes; ///< ComputeResult 


  };
}
#endif
