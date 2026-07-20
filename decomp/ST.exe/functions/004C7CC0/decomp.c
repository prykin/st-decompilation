
undefined4 __thiscall
FUN_004c7cc0(void *this,int param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,char *param_8)

{
  char *_Dest;
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if ((int)param_3 < 0) {
    iVar4 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
    if ((*(int *)((int)this + 0x3d4) != 0) && (*(int *)((int)this + 0x607) != 0)) {
      do {
        iVar1 = *(int *)((int)this + 0x3d4);
        bVar3 = false;
        iVar8 = iVar1 + -1;
        if (-1 < iVar8) {
          piVar5 = (int *)(iVar8 * 0x27 + *(int *)((int)this + 0x607));
LAB_004c7d1c:
          if ((*piVar5 != param_1) || (piVar5[1] != param_2)) goto LAB_004c7d2b;
          bVar3 = true;
          puVar10 = (undefined4 *)(iVar8 * 0x27 + *(int *)((int)this + 0x607));
          iVar2 = puVar10[2];
          if (iVar2 <= iVar4) {
            iVar4 = iVar4 - iVar2;
            if (iVar8 < iVar1 + -1) {
              uVar7 = ((iVar1 - iVar8) + -1) * 0x27;
              puVar9 = (undefined4 *)((iVar8 + 1) * 0x27 + *(int *)((int)this + 0x607));
              for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
              for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
                puVar9 = (undefined4 *)((int)puVar9 + 1);
                puVar10 = (undefined4 *)((int)puVar10 + 1);
              }
            }
            *(int *)((int)this + 0x3d4) = *(int *)((int)this + 0x3d4) + -1;
            goto LAB_004c7d8c;
          }
          piVar5 = (int *)(iVar8 * 0x27 + 8 + *(int *)((int)this + 0x607));
          *piVar5 = *piVar5 - iVar4;
          goto cf_common_exit_004C8287;
        }
LAB_004c7d8c:
        if (iVar4 == 0) goto cf_common_exit_004C8287;
      } while (bVar3);
    }
    if (((iVar4 != 0) && (*(int *)((int)this + 0x361) == param_1)) &&
       (*(uint *)((int)this + 0x369) == param_2)) {
      if (*(int *)((int)this + 0x36d) < iVar4) {
        iVar4 = *(int *)((int)this + 0x36d);
      }
      iVar4 = *(int *)((int)this + 0x36d) - iVar4;
      *(int *)((int)this + 0x36d) = iVar4;
      if (iVar4 == 0) {
        *(int *)((int)this + 0x365) = *(int *)((int)this + 0x361);
        iVar4 = thunk_FUN_004c90c0(this);
        if (iVar4 == 0) {
          *(undefined4 *)((int)this + 0x36d) = 1;
        }
        else {
          iVar4 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
          if (((char)iVar4 != '\x03') && (*(int *)((int)this + 0x3a8) != 0)) {
            thunk_FUN_004d87b0(*(char *)((int)this + 0x24),*(int *)((int)this + 0x3a8));
          }
          if (*(int *)((int)this + 0x3ac) != 0) {
            thunk_FUN_004d88f0(*(char *)((int)this + 0x24),*(int *)((int)this + 0x3ac));
          }
          if (*(int *)((int)this + 0x3b0) != 0) {
            thunk_FUN_004d8a30(*(char *)((int)this + 0x24),*(int *)((int)this + 0x3b0));
          }
          if (*(int *)((int)this + 0x3b4) != 0) {
            thunk_FUN_004e4380(*(int *)((int)this + 0x24),*(int *)((int)this + 0x3b4));
          }
          thunk_FUN_004d78e0(*(char *)((int)this + 0x24));
        }
      }
    }
  }
  else {
    iVar4 = thunk_FUN_004c7860(this,param_1,param_2,param_3,0,0);
    if (iVar4 != 0) {
      iVar4 = thunk_FUN_004c7860(this,param_1,param_2,param_3,1,0);
      if ((iVar4 == 0) || (bVar3 = thunk_FUN_004c7c20((int)this), CONCAT31(extraout_var,bVar3) == 0)
         ) {
        if (param_4 != 0) {
          iVar4 = thunk_FUN_004c9370(this,param_1,param_2,-1);
          if ((*(int *)((int)this + 0x361) == param_1) && (*(uint *)((int)this + 0x369) == param_2))
          {
            iVar4 = iVar4 + *(int *)((int)this + 0x36d);
          }
          if ((int)(iVar4 + param_3) < 100) {
            if (*(int *)((int)this + 0x3d8) <= *(int *)((int)this + 0x3d4) + 1) {
              iVar4 = *(int *)((int)this + 0x3d8) + 0x14;
              *(int *)((int)this + 0x3d8) = iVar4;
              iVar4 = Library::DKW::LIB::FUN_006acf50(*(int *)((int)this + 0x607),iVar4 * 0x27);
              *(int *)((int)this + 0x607) = iVar4;
            }
            *(int *)(*(int *)((int)this + 0x3d4) * 0x27 + *(int *)((int)this + 0x607)) = param_1;
            *(uint *)(*(int *)((int)this + 0x3d4) * 0x27 + 4 + *(int *)((int)this + 0x607)) =
                 param_2;
            *(uint *)(*(int *)((int)this + 0x3d4) * 0x27 + 8 + *(int *)((int)this + 0x607)) =
                 param_3;
            *(undefined4 *)(*(int *)((int)this + 0x3d4) * 0x27 + 0xc + *(int *)((int)this + 0x607))
                 = param_5;
            *(undefined4 *)(*(int *)((int)this + 0x3d4) * 0x27 + 0x10 + *(int *)((int)this + 0x607))
                 = param_6;
            *(undefined4 *)(*(int *)((int)this + 0x3d4) * 0x27 + 0x14 + *(int *)((int)this + 0x607))
                 = param_7;
            puVar10 = (undefined4 *)
                      (*(int *)((int)this + 0x3d4) * 0x27 + 0x18 + *(int *)((int)this + 0x607));
            *puVar10 = 0;
            puVar10[1] = 0;
            puVar10[2] = 0;
            *(undefined2 *)(puVar10 + 3) = 0;
            *(undefined1 *)((int)puVar10 + 0xe) = 0;
            if (param_8 != (char *)0x0) {
              Library::MSVCRT::_strncpy
                        ((char *)(*(int *)((int)this + 0x3d4) * 0x27 + 0x18 +
                                 *(int *)((int)this + 0x607)),param_8,0xf);
            }
            *(int *)((int)this + 0x3d4) = *(int *)((int)this + 0x3d4) + 1;
            thunk_FUN_004c7460(this);
          }
        }
      }
      else {
        if (*(int *)((int)this + 0x361) == 0) {
          *(int *)((int)this + 0x361) = param_1;
          *(uint *)((int)this + 0x369) = param_2;
          *(undefined4 *)((int)this + 0x38c) = PTR_00802a38->field_00E4;
          uVar7 = thunk_FUN_004c7730(this,param_1,param_2);
          *(uint *)((int)this + 0x390) = uVar7;
          *(undefined4 *)((int)this + 0x394) = 0;
          *(undefined4 *)((int)this + 0x3cc) = 0;
          *(undefined4 *)((int)this + 0x36d) = 0;
          *(undefined4 *)((int)this + 0x375) = param_6;
          _Dest = (char *)((int)this + 0x37d);
          *(undefined4 *)((int)this + 0x379) = param_7;
          *(undefined4 *)((int)this + 0x371) = param_5;
          _Dest[0] = '\0';
          _Dest[1] = '\0';
          _Dest[2] = '\0';
          _Dest[3] = '\0';
          *(undefined4 *)((int)this + 0x381) = 0;
          *(undefined4 *)((int)this + 0x385) = 0;
          *(undefined2 *)((int)this + 0x389) = 0;
          *(undefined1 *)((int)this + 0x38b) = 0;
          if (param_8 != (char *)0x0) {
            Library::MSVCRT::_strncpy(_Dest,param_8,0xf);
          }
          thunk_FUN_004c7260(this,*(Global_sub_004C7260_param_1Enum *)((int)this + 0x361),
                             *(int *)((int)this + 0x369),(undefined4 *)((int)this + 0x398),
                             (undefined4 *)((int)this + 0x39c),(int *)((int)this + 0x3a0),
                             (undefined4 *)((int)this + 0x3a4));
          *(undefined4 *)((int)this + 0x3a8) = 0;
          *(undefined4 *)((int)this + 0x3ac) = 0;
          *(undefined4 *)((int)this + 0x3b0) = 0;
          *(undefined4 *)((int)this + 0x3b4) = 0;
          switch(*(undefined4 *)((int)this + 0x5ac)) {
          case 0x32:
          case 0x40:
          case 0x49:
          case 0x5c:
            thunk_FUN_004ce860(this);
          }
        }
        *(uint *)((int)this + 0x36d) = *(int *)((int)this + 0x36d) + param_3;
        switch(*(undefined4 *)((int)this + 0x5ac)) {
        case 0x32:
        case 0x40:
        case 0x49:
        case 0x5c:
          thunk_FUN_004ce770(this,param_1);
          break;
        case 0x35:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
          thunk_FUN_004e2ad0(this,param_1,param_2);
        }
        thunk_FUN_004c7460(this);
        TLOBaseTy::RotateSpr(this,1);
        if (*(int *)(&DAT_00792778 + *(int *)((int)this + 0x235) * 4) != 0) {
          *(undefined4 *)((int)this + 0x261) = 0;
          *(undefined4 *)((int)this + 0x2e1) = 0;
        }
        if (*(int *)((int)this + 0x361) == 5) {
          thunk_FUN_004cc880(this,3);
          uVar7 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
          if (*(int *)(&DAT_00796230 + ((uVar7 & 0xff) + *(int *)((int)this + 0x235) * 3) * 4) != 0)
          {
            iVar4 = *(int *)this;
            uVar7 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
            (**(code **)(iVar4 + 0x90))
                      (3,*(undefined4 *)
                          (&DAT_00796230 + ((uVar7 & 0xff) + *(int *)((int)this + 0x235) * 3) * 4));
          }
        }
        else if (*(int *)((int)this + 0x361) == 6) {
          (**(code **)(*(int *)this + 0x90))(3,0x272);
        }
      }
    }
  }
cf_common_exit_004C8287:
  if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)*(uint *)((int)this + 0x24));
  }
  return 0;
LAB_004c7d2b:
  iVar8 = iVar8 + -1;
  piVar5 = (int *)((int)piVar5 + -0x27);
  if (iVar8 < 0) goto LAB_004c7d8c;
  goto LAB_004c7d1c;
}

