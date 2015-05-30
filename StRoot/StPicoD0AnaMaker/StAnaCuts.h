#ifndef StAnaCuts_H
#define StAnaCuts_H

/* **************************************************
 *  Cuts namespace.
 *
 *  Authors:  Mustafa Mustafa (mmustafa@lbl.gov)
 *
 * **************************************************
 */

#include "Rtypes.h"
#include <string>

#include "StAnaCuts.h"

namespace anaCuts
{
   // path to lists of triggers prescales
   // lists are obtained from http://www.star.bnl.gov/protected/common/common2014/trigger2014/plots_au200gev/
   std::string const prescalesFilesDirectoryName = "./run14AuAu200GeVPrescales";
   //event
   UShort_t const triggerWord = 0x1F; //first five bits see http://rnc.lbl.gov/~xdong/SoftHadron/picoDst.html
   float const vz = 6.0;// cm.
   float const vzVpdVz = 3.0; // 3 cm.
   float const Verror = 1.0e-5; // 
   float const Vrcut = 2.0; // 

   // QA tracks cuts
   float const qaGPt = 0.15;
   int const qaNHitsFit = 25;
   int const qaNHitsDedx = 12;
   float const qaDca = 1.5;
   float const qaEta = 0.4;

   //tracking
   float const mMinMinPt = 0.7;
   float const mMaxMinPt = 1.2;
   float const mP0MinPt = 0.3;
   float const mP1MinPt = 0.3;
   int   const nPtBins = 5;
   float const PtEdge[nPtBins+1] = {0., 1., 2., 3., 5., 12.};

   float const minPt = 1.2;
   int const nHitsFit = 20;

   //pions
   float const nSigmaPion = 3.0;
   float const pTofBetaDiff = 0.03;

   //kaons
   float const nSigmaKaon = 2.0;
   float const kTofBetaDiff = 0.03;

   float const cosTheta = 0.995;
   float const dcaDaughters = 0.0050;
   float const kDca = 0.008; // minimum
   float const pDca = 0.008;
}
#endif
