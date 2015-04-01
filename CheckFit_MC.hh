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
   *This class is used to remplace the ON and OFF Data by a poissonian distribution in each bands (zenith, offset, area and energy).
   *The mean of the ON in each Band is obtained by calculating the mean of the signal and the mean of the background in the ON.
   *The mean of the signal is calculated with the functionExpectedExcess of the computeResult Class by usinf the spectral parameters of the law generating the MCs given as an input
   *the mean of the background in each band is calculated by using the formula: alpha_iband * N_OFF for E<1Tev and a power law of spectral index 2.7 for energy >1 TeV.
   *The OFF data are not changed for E<1 TeV. For E>1TeV, the off data are calculated by drawing a poissonian law with a mean value for each energy bin determined by the integration of the power law with a spectral index of 2.7 between each boundaries of the bin.
   */ 
  class CheckFit_MC 
  {
    
  public :
    CheckFit_MC(BandsFactory &BandsFact ,std::vector<Band> &BandArray, Hypothesis &hypo); // use in the FCN
    ~CheckFit_MC();
    void N_On_MC(std::vector<Band> &BandArray);
    //inline std::vector<Band> Get_band()   const  { return fBandArray;}
  

  private :
    
    std::vector<Band> fBand_realdata; 
    // object TRandom 
    TRandom3 trandom;

    Hypothesis *fHypothesis; ///< Hypothesis

    ComputeResults *fCompRes; ///< ComputeResult 


  };
}
#endif
