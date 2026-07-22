#include "../../pseudocode_runtime.h"


/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8D4>00401596

   [STObjectFactoryApplier] Central object factory for 0x0127 (ST_OBJECT_RESEARCH_PANEL).
   Evidence: registry[54] at 007CA8D0 stores type 0x0127 and executable pointer 00401596; allocation
   size 646 uniquely matches /ResearchPanelTy */

ResearchPanelTy * __cdecl CreateResearchPanel(void)

{
  ResearchPanelTy *this;
  undefined4 *puVar2;

  this = (ResearchPanelTy *)FUN_006b04d0(0x286);
  if (this != (ResearchPanelTy *)0x0) {
    sub_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    *(undefined4 *)&this->field_0x64 = 4;
    this->field_0068 = 0;
    *(undefined2 *)&this->field_0x172 = 2;
    *(undefined4 *)&this->field_0x178 = 0;
    *(undefined4 *)&this->field_0x17c = 0;
    this->field_0184 = (ushort *)0x0;
    this->field_0190 = 0;
    this->field_0188 = (ushort *)0x0;
    *(undefined4 *)&this->field_0x19d = 0;
    *(undefined4 *)&this->field_0x180 = 0;
    this->field_01A1 = 0;
    *(undefined4 *)&this->field_0x1a5 = 0;
    *(undefined4 *)&this->field_0x1a9 = 0;
    *(undefined4 *)&this->field_0x1ad = 0;
    *(undefined4 *)&this->field_0x1b1 = 0;
    puVar2 = (undefined4 *)&this->field_01B5;
    memset(puVar2, 0, 0xc2); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0xc0);
    *(undefined1 *)((int)puVar2 + 2) = 0;
    this->field_0199 = 0;
    this->field_0279 = 1;
    this->field_0278 = 0;
    this->field_0000 = &PTR_GetMessage_0079ad64;
    this->field_003C = 0x1c7;
    this->field_0044 = 0;
    *(undefined4 *)&this->field_0x40 = 0x13d;
    *(undefined4 *)&this->field_0x48 = 100;
    this->field_0x194 = 0;
    *(undefined4 *)&this->field_0x195 = 0;
    this->field_0282 = 0;
    *(undefined4 *)&this->field_0x27e = 0;
    this->field_027A = 0;
    return this;
  }
  return (ResearchPanelTy *)0x0;
}

