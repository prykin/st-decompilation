
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jell_m.cpp
   STJellyManC::Error */

undefined4 __thiscall
STJellyManC::Error(STJellyManC *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((int)this->field_020F < (int)this->field_01FD) {
    uVar3 = thunk_FUN_00582460(param_1,param_2,param_3,*(undefined4 *)&this->field_0x1ed,
                               *(undefined4 *)&this->field_0x1f1,*(undefined4 *)&this->field_0x1f5,
                               *(undefined4 *)&this->field_0x1f9,*(undefined4 *)&this->field_0x18,
                               *(undefined4 *)&this->field_0x24,*(undefined4 *)&this->field_0x201,
                               (uint)*(ushort *)&this->field_0x205,0xffff);
    return uVar3;
  }
  iVar2 = ReportDebugMessage(s_E____titans_Igor_to_jell_m_cpp_007cb2f0,0xda,0,0,&DAT_007a4ccc,
                             s_STJellyManC__Error_Max_jellies_r_007cb318);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

