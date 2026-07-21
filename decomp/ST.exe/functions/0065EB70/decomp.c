
int __thiscall
FUN_0065eb70(void *this,uint param_1,int param_2,uint *param_3,uint param_4,uint param_5,
            byte *param_6,undefined4 param_7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint *local_c;
  int local_8;

  iVar4 = param_2;
  iVar2 = 0;
  local_8 = 0;
  local_c = (uint *)0x0;
  if (((g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) && (param_3 != (uint *)0x0)) &&
     (0 < param_2)) {
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = *(uint *)((int)this + 0x97);
    }
    if (param_1 == 8) {
      param_1 = (uint)DAT_0080874d;
    }
    if (param_1 != 0xff) {
      cVar5 = (char)param_1;
      uVar1 = thunk_FUN_0043e460(cVar5);
      if (uVar1 == 0) {
        local_8 = 0;
      }
      else {
        local_c = Library::DKW::LIB::FUN_006aac10((uint)uVar1 * 0x2c);
        DAT_00811900 = 0;
        if ((char)param_7 == '\b') {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          param_7 = CONCAT31(param_7._1_3_,cVar5);
        }
        else if (((char)param_7 < '\0') || ('\b' < (char)param_7)) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          param_7 = CONCAT31(param_7._1_3_,0xff);
        }
        _EnumPlObj(param_1,param_4,param_5,param_6,(char)param_7,0,0,0,-1,-1,-1,&LAB_0040559c,
                   local_c,(undefined *)0x0);
        if (DAT_00811900 == 0) {
          local_8 = 0;
        }
        else if (iVar4 < DAT_00811900) {
          if (0 < iVar4) {
            do {
              iVar2 = thunk_FUN_00423220((void *)((int)this + 0x1c),(int *)local_c,DAT_00811900);
              if (local_c[iVar2 * 0xb + 3] != 0) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                param_2._0_2_ = CONCAT11(1,cVar5);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                param_2 = CONCAT22((short)local_c[iVar2 * 0xb + 4],(undefined2)param_2);
                Library::DKW::TBL::FUN_006ae1c0(param_3,&param_2);
                local_8 = local_8 + 1;
              }
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          iVar3 = 0;
          iVar4 = DAT_00811900;
          if (0 < DAT_00811900) {
            do {
              if (*(int *)(iVar2 + 0xc + (int)local_c) != 0) {
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                param_2._0_2_ = CONCAT11(1,cVar5);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                param_2 = CONCAT22(*(undefined2 *)(iVar2 + 0x10 + (int)local_c),(undefined2)param_2)
                ;
                Library::DKW::TBL::FUN_006ae1c0(param_3,&param_2);
                local_8 = local_8 + 1;
                iVar4 = DAT_00811900;
              }
              iVar3 = iVar3 + 1;
              iVar2 = iVar2 + 0x2c;
            } while (iVar3 < iVar4);
          }
        }
      }
      if (local_c != (uint *)0x0) {
        FreeAndNull(&local_c);
      }
      return local_8;
    }
  }
  return -1;
}

