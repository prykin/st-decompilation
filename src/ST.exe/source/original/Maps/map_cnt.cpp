#include "st/generated.hpp"
// Generated translation unit: source/original/Maps/map_cnt.cpp

// 006A2770 FUN_006a2770
#line 4 "decomp/ST.exe/functions/006A2770/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Maps\map_cnt.cpp
   Diagnostic line evidence: 767 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __cdecl
st::fn_006A2770(int *param_1,int param_2,int param_3,int param_4,ushort *param_5,undefined *param_6,
            undefined4 param_7)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *local_8;

  puVar2 = param_5;
  if (((((-1 < param_2) && (param_2 < *param_1)) && (-1 < param_3)) &&
      ((param_3 < param_1[1] && (-1 < param_4)))) && (param_4 < 6)) {
    local_8 = reinterpret_cast<int *>(&DAT_007df86c);
    do {
      uVar4 = st::machine_word_boundary_cast<uint>(local_8[-1] + param_2);
      iVar3 = *local_8 + param_3;
      if ((((int)uVar4 < 0) || (*param_1 <= (int)uVar4)) || ((iVar3 < 0 || (param_1[1] <= iVar3))))
      {
        st::fn_006A5E40
                  (0x521,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Maps\\map_cnt.cpp"),0x2ff);
      }
      st::fn_00402AB3(param_1,uVar4,iVar3,param_4,(short *)param_5,param_6,param_7);
      local_8 = local_8 + 2;
    } while ((int)local_8 < 0x7df88c);
    auto param_5_after_write = (ushort *)&DAT_007df888; /* compiler stack-slot lifetime split */
    piVar5 = reinterpret_cast<int *>(&DAT_007df86c);
    do {
      iVar3 = piVar5[-1];
      iVar1 = *piVar5;
      puVar2[2] = (byte)((byte)puVar2[2] ^ (byte)*param_5_after_write) & 0xf ^ puVar2[2];
      *puVar2 = (byte)((byte)*puVar2 ^ (byte)*param_5_after_write) & 0xf ^ *puVar2;
      st::fn_00404CF5(param_1,iVar3 + param_2,iVar1 + param_3,param_4,0xff,puVar2,param_6,param_7
                        );
      piVar5 = piVar5 + 2;
      param_5_after_write = param_5_after_write + 2;
    } while ((int)piVar5 < 0x7df88c);
    return 0;
  }
  return 1;
}

