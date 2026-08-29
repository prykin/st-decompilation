#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_parameter_pointer_role target=parameter:0: parameter=/void *32
   Evidence: generic machine-word parameter reaches only unscaled address bases: direct_reads=1,
   pointer_dereferences=20, scalar_uses=0; sites=005EFF00 dereference: MOV EDX,dword ptr [ECX +
   0x277] | 005EFF2E dereference: MOV EDX,dword ptr [ECX + 0x27b] | 005EFF34 dereference: MOV word
   ptr [ECX + 0x47],AX | 005EFF60 dereference: MOV EDX,dword ptr [ECX + 0x27f] | 005EFF66
   dereference: MOV word ptr [ECX + 0x49],AX | 005EFF94 dereference: MOV DX,word ptr [ECX + 0x277] |
   005EFF9B dereference: MOV word ptr [ECX + 0x4b],AX | 005EFF9F dereference: MOV word ptr [ECX +
   0x41],DX | 005EFFA3 dereference: MOV DX,word ptr [ECX + 0x27f] | 005EFFAA dereference: MOV word
   ptr [ECX + 0x45],DX | 005EFFAE dereference: MOV DX,word ptr [ECX + 0x244] | 005EFFB5 dereference:
   MOV AX,word ptr [ECX + 0x27b] | 005EFFBC dereference: MOV word ptr [ECX + 0x5d],DX | 005EFFC0
   dereference: MOV DX,word ptr [ECX + 0x2ba] | 005EFFC7 dereference: MOV word ptr [ECX + 0x43],AX |
   005EFFCB dereference: MOV AX,word ptr [ECX + 0x242] | 005EFFD6 dereference: MOV word ptr [ECX +
   0x5b],AX | 005EFFDA dereference: MOV AX,word ptr [ECX + 0x246] | 005EFFE1 dereference: MOV word
   ptr [ECX + 0x5f],AX | 005EFFE5 dereference: MOV word ptr [ECX + 0x6c],DX */

void __fastcall FUN_005eff00(void *param_1)

{
  int iVar1;
  short sVar2;

  iVar1 = STField<int>(param_1,0x277);
  sVar2 = STBiasedDiv16(iVar1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar1 = STField<int>(param_1,0x27b);
  STField<short>(param_1,0x47) = sVar2;
  sVar2 = STBiasedDiv16(iVar1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar1 = STField<int>(param_1,0x27f);
  STField<short>(param_1,0x49) = sVar2;
  sVar2 = STBiasedDiv16(iVar1, 200); /* exact signed 16-bit grid-index division */
  STField<short>(param_1,0x4b) = sVar2;
  STField<undefined2>(param_1,0x41) = STField<undefined2>(param_1,0x277);
  STField<undefined2>(param_1,0x45) = STField<undefined2>(param_1,0x27f);
  STField<undefined2>(param_1,0x5d) = STField<undefined2>(param_1,0x244);
  STField<undefined2>(param_1,0x43) = STField<undefined2>(param_1,0x27b);
  STField<undefined2>(param_1,0x5b) = STField<undefined2>(param_1,0x242);
  STField<undefined2>(param_1,0x5f) = STField<undefined2>(param_1,0x246);
  STField<short>(param_1,0x6c) = STField<short>(param_1,0x2ba) * 0xf;
  return;
}

