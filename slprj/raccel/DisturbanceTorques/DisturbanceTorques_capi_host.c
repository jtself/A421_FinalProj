#include "DisturbanceTorques_capi_host.h"
static DisturbanceTorques_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        DisturbanceTorques_host_InitializeDataMapInfo(&(root), "DisturbanceTorques");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
