
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel2.cpp
   CPanelTy::Update2PanelSI */

void __thiscall CPanelTy::Update2PanelSI(CPanelTy *this)

{
  CPanelTy *pCVar1;
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  CPanelTy CVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 unaff_ESI;
  CPanelTy *pCVar8;
  void *unaff_EDI;
  int *piVar9;
  undefined4 local_ac;
  undefined4 local_a8 [16];
  int local_68;
  CPanelTy local_64;
  CPanelTy local_63;
  CPanelTy local_4b;
  CPanelTy local_34;
  CPanelTy *local_c;
  uint local_8;
  
  local_8 = local_8 & 0xffffff00;
  local_ac = DAT_00858df8;
  DAT_00858df8 = &local_ac;
  local_c = this;
  iVar5 = __setjmp3(local_a8,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_ac;
    iVar7 = FUN_006ad4d0(s_E____titans_Andrey_cpanel2_cpp_007c2524,0x234,0,iVar5,&DAT_007a4ccc);
    if (iVar7 == 0) {
      FUN_006a5e40(iVar5,0,0x7c2524,0x234);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pCVar1 = local_c + 0xb99;
  pCVar8 = pCVar1;
  piVar9 = &local_68;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar9 = *(int *)pCVar8;
    pCVar8 = pCVar8 + 4;
    piVar9 = piVar9 + 1;
  }
  pCVar8 = pCVar1;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(int *)pCVar8 = 0;
    pCVar8 = pCVar8 + 4;
  }
  thunk_FUN_0043beb0(DAT_007fa174,2,(int *)pCVar1);
  if (local_63 == this_00[0xb9e]) {
    switch(this_00[0xb9e]) {
    case (CPanelTy)0x1:
      if ((local_68 == *(int *)(this_00 + 0xb99)) && (local_64 == this_00[0xb9d])) {
        thunk_FUN_00501d00(this_00,(int *)(this_00 + 0xb99),&local_68);
        switch(*(int *)(this_00 + 0xb99)) {
        case 0x1a:
          goto switchD_005030a2_caseD_1a;
        case 0x1b:
        case 0x1d:
        case 0x23:
        case 0x24:
          CVar4 = this_00[0xbcd];
          if (CVar4 == local_34) {
            DAT_00858df8 = (undefined4 *)local_ac;
            return;
          }
          if ((CVar4 != (CPanelTy)0xff) &&
             (local_8 = (uint)local_8._1_3_ << 8, CVar4 != (CPanelTy)0x0)) {
            do {
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),1);
              thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),(local_8 & 0xff) * 4 + 0x3f,0x87,
                                 '\x01',pbVar6);
              CVar4 = (CPanelTy)((byte)local_8 + 1);
              local_8 = CONCAT31(local_8._1_3_,CVar4);
            } while ((byte)CVar4 < (byte)this_00[0xbcd]);
          }
          if ((byte)local_8 < 0x14) {
            iVar7 = 0x14 - (local_8 & 0xff);
            iVar5 = (local_8 & 0xff) * 4 + 0x3f;
            do {
              pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
              thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),iVar5,0x87,'\x01',pbVar6);
              iVar5 = iVar5 + 4;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          if ((int)*(uint *)(this_00 + 0x154) < 0) {
            DAT_00858df8 = (undefined4 *)local_ac;
            return;
          }
          FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x154),0xffffffff,*(uint *)(this_00 + 0x48),
                       *(uint *)(this_00 + 0xa0));
          DAT_00858df8 = (undefined4 *)local_ac;
          return;
        default:
          DAT_00858df8 = (undefined4 *)local_ac;
          return;
        }
      }
      break;
    case (CPanelTy)0x2:
    case (CPanelTy)0x3:
      if ((local_68 == *(int *)(this_00 + 0xb99)) && (local_64 == this_00[0xb9d])) {
        thunk_FUN_00501d00(this_00,(int *)(this_00 + 0xb99),&local_68);
        DAT_00858df8 = (undefined4 *)local_ac;
        return;
      }
      break;
    case (CPanelTy)0x4:
      if (local_68 == *(int *)(this_00 + 0xb99)) {
        DAT_00858df8 = (undefined4 *)local_ac;
        return;
      }
      break;
    default:
      goto switchD_00503051_default;
    }
  }
  PaintCtrlBoatSI(this_00);
  SetControlBoatSI(this_00);
  thunk_FUN_00501a10((int)this_00);
switchD_00503051_default:
  DAT_00858df8 = (undefined4 *)local_ac;
  return;
switchD_005030a2_caseD_1a:
  if (this_00[0xbb6] == local_4b) {
    DAT_00858df8 = (undefined4 *)local_ac;
    return;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (((byte)this_00[0xbb6] & 0xfe) != 0) {
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),3);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),(local_8 & 0xff) * 4 + 0x3f,0x87,'\x01',
                         pbVar6);
      bVar3 = (byte)local_8 + 1;
      local_8 = CONCAT31(local_8._1_3_,bVar3);
    } while (bVar3 < (byte)this_00[0xbb6] >> 1);
  }
  if ((byte)local_8 < 0x14) {
    iVar7 = 0x14 - (local_8 & 0xff);
    iVar5 = (local_8 & 0xff) * 4 + 0x3f;
    do {
      pbVar6 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x2b6),0);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x18c),iVar5,0x87,'\x01',pbVar6);
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((int)*(uint *)(this_00 + 0x154) < 0) {
    DAT_00858df8 = (undefined4 *)local_ac;
    return;
  }
  FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x154),0xffffffff,*(uint *)(this_00 + 0x48),
               *(uint *)(this_00 + 0xa0));
  DAT_00858df8 = (undefined4 *)local_ac;
  return;
}

