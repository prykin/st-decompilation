
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DelObjFromTmps */

undefined4 __thiscall
STAllPlayersC::DelObjFromTmps
          (STAllPlayersC *this,char param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  DArrayTy *pDVar2;
  dword dVar3;
  code *pcVar4;
  char cVar5;
  STGameObjC *pSVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  Global_sub_0043FC50_param_1Enum GVar11;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0xffffffff;
  cVar5 = (char)param_3;
  if (param_2 < 0x1a5) {
    if (param_2 == 0x1a4) {
      iVar9 = 0;
      iVar7 = param_1 * 0xa62 + 0x7f4fd3;
      do {
        puVar1 = (undefined4 *)(iVar9 * 0x10 + iVar7);
        if (((*(int *)(iVar9 * 0x10 + iVar7) == 0x1a4) && (puVar1[1] == (int)cVar5)) &&
           (*(short *)(puVar1 + 2) == (short)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,param_4,CASE_5);
          (*pSVar6->vtable[1].vfunc_14)(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar9 == 0) {
            thunk_FUN_0043fc50(CASE_4,0);
            GVar11 = CASE_5;
          }
          else {
            GVar11 = CASE_F;
          }
          thunk_FUN_0043fc50(GVar11,0);
          local_c = 0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
      return local_c;
    }
    if (param_2 == 0x14) {
      param_2 = 0;
      iVar7 = param_1 * 0xa62 + 0x7f4f83;
      do {
        puVar1 = (undefined4 *)(param_2 * 0x10 + iVar7);
        if ((*(int *)(param_2 * 0x10 + iVar7) == 0x3c) && (puVar1[1] == (int)cVar5)) {
          pDVar2 = *(DArrayTy **)((int)puVar1 + 10);
          uVar10 = 0;
          dVar3 = pDVar2->count;
          if (0 < (int)dVar3) {
            do {
              DArrayGetElement(pDVar2,uVar10,&local_8);
              if ((short)local_8 == (short)param_4) {
                pSVar6 = GetObjPtr(this,param_3,param_4,CASE_1);
                (*pSVar6->vtable[1].vfunc_14)(0);
                local_8 = 0xffff;
                Library::DKW::TBL::FUN_006ae140(&pDVar2->flags,uVar10,&local_8);
                *(short *)((int)puVar1 + 0xe) = *(short *)((int)puVar1 + 0xe) + -1;
                if (*(short *)((int)puVar1 + 0xe) == 0) {
                  DArrayDestroy(*(DArrayTy **)((int)puVar1 + 10));
                  *(undefined4 *)((int)puVar1 + 10) = 0;
                  *puVar1 = 0;
                }
                if (param_2 == 0) {
                  thunk_FUN_0043fc50(CASE_1,0);
                  GVar11 = CASE_2;
                }
                else {
                  GVar11 = CASE_E;
                }
                thunk_FUN_0043fc50(GVar11,0);
                local_c = 0;
                break;
              }
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)dVar3);
          }
        }
        param_2 = param_2 + 1;
        if (4 < param_2) {
          return local_c;
        }
      } while( true );
    }
    if (param_2 == 0x5a) {
      iVar9 = 0;
      iVar7 = param_1 * 0xa62 + 0x7f4fd3;
      do {
        puVar1 = (undefined4 *)(iVar9 * 0x10 + iVar7);
        if (((*(int *)(iVar9 * 0x10 + iVar7) == 0x5a) && (puVar1[1] == (int)cVar5)) &&
           (*(short *)(puVar1 + 2) == (short)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,param_4,CASE_4);
          (*pSVar6->vtable[1].vfunc_14)(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar9 == 0) {
            thunk_FUN_0043fc50(CASE_4,0);
            GVar11 = CASE_5;
          }
          else {
            GVar11 = CASE_F;
          }
          thunk_FUN_0043fc50(GVar11,0);
          local_c = 0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
      return local_c;
    }
    if (param_2 == 0x172) {
      iVar9 = 0;
      iVar7 = param_1 * 0xa62 + 0x7f4fd3;
      do {
        puVar1 = (undefined4 *)(iVar9 * 0x10 + iVar7);
        if (((*(int *)(iVar9 * 0x10 + iVar7) == 0x172) && (puVar1[1] == (int)cVar5)) &&
           (*(short *)(puVar1 + 2) == (short)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,param_4,CASE_2);
          (*pSVar6->vtable[1].vfunc_14)(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar9 == 0) {
            thunk_FUN_0043fc50(CASE_4,0);
            GVar11 = CASE_5;
          }
          else {
            GVar11 = CASE_F;
          }
          thunk_FUN_0043fc50(GVar11,0);
          local_c = 0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
      return local_c;
    }
  }
  else if (param_2 < 0x1b9) {
    if (param_2 == 0x1b8) {
      iVar9 = 0;
      iVar7 = param_1 * 0xa62 + 0x7f4fd3;
      do {
        puVar1 = (undefined4 *)(iVar9 * 0x10 + iVar7);
        if (((*(int *)(iVar9 * 0x10 + iVar7) == 0x1b8) && (puVar1[1] == (int)cVar5)) &&
           (*(short *)(puVar1 + 2) == (short)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,param_4,CASE_6);
          (*pSVar6->vtable[1].vfunc_14)(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar9 == 0) {
            thunk_FUN_0043fc50(CASE_4,0);
            GVar11 = CASE_5;
          }
          else {
            GVar11 = CASE_F;
          }
          thunk_FUN_0043fc50(GVar11,0);
          local_c = 0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
      return local_c;
    }
    if (param_2 == 0x1ae) {
      iVar9 = 0;
      iVar7 = param_1 * 0xa62 + 0x7f4f83;
      do {
        puVar1 = (undefined4 *)(iVar9 * 0x10 + iVar7);
        if (((*(int *)(iVar9 * 0x10 + iVar7) == 0x1ae) && (puVar1[1] == (int)cVar5)) &&
           (*(short *)(puVar1 + 2) == (short)param_4)) {
          pSVar6 = GetObjPtr(this,param_3,param_4,CASE_3);
          (*pSVar6->vtable[1].vfunc_14)(0);
          *puVar1 = 0;
          puVar1[1] = 0xff;
          *(undefined2 *)(puVar1 + 2) = 0;
          if (iVar9 == 0) {
            thunk_FUN_0043fc50(CASE_1,0);
            GVar11 = CASE_2;
          }
          else {
            GVar11 = CASE_E;
          }
          thunk_FUN_0043fc50(GVar11,0);
          local_c = 0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 5);
      return local_c;
    }
  }
  else if ((999 < param_2) && (param_2 < 0x3ea)) {
    param_2 = 0;
    iVar7 = param_1 * 0xa62 + 0x7f4fd3;
    do {
      puVar1 = (undefined4 *)(param_2 * 0x10 + iVar7);
      if ((*(int *)(param_2 * 0x10 + iVar7) == 0x19a) && (puVar1[1] == (int)cVar5)) {
        pDVar2 = *(DArrayTy **)((int)puVar1 + 10);
        uVar10 = 0;
        dVar3 = pDVar2->count;
        if (0 < (int)dVar3) {
          do {
            DArrayGetElement(pDVar2,uVar10,&local_8);
            if ((short)local_8 == (short)param_4) {
              pSVar6 = GetObjPtr(this,param_3,param_4,CASE_1);
              (*pSVar6->vtable[1].vfunc_14)(0);
              local_8 = 0xffff;
              Library::DKW::TBL::FUN_006ae140(&pDVar2->flags,uVar10,&local_8);
              *(short *)((int)puVar1 + 0xe) = *(short *)((int)puVar1 + 0xe) + -1;
              if (*(short *)((int)puVar1 + 0xe) == 0) {
                DArrayDestroy(*(DArrayTy **)((int)puVar1 + 10));
                *(undefined4 *)((int)puVar1 + 10) = 0;
                *puVar1 = 0;
              }
              if (param_2 == 0) {
                thunk_FUN_0043fc50(CASE_4,0);
                GVar11 = CASE_5;
              }
              else {
                GVar11 = CASE_F;
              }
              thunk_FUN_0043fc50(GVar11,0);
              local_c = 0;
              break;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)dVar3);
        }
      }
      param_2 = param_2 + 1;
      if (4 < param_2) {
        return local_c;
      }
    } while( true );
  }
  iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x352,0,0,&DAT_007a4ccc,
                             s_STAllPlayersC__DelObjFromTmps_in_007a62d0);
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  pcVar4 = (code *)swi(3);
  uVar8 = (*pcVar4)();
  return uVar8;
}

