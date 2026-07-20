
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::SetMine */

int __thiscall STBoatC::SetMine(STBoatC *this,int *param_1,undefined4 param_2,int param_3)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  short sVar5;
  STBoatC_field_06F7State SVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  STBoatCVTable *pSVar10;
  undefined2 extraout_var;
  undefined4 in_EDX;
  undefined2 extraout_var_00;
  undefined2 uVar12;
  undefined4 *puVar11;
  undefined2 uVar13;
  undefined4 uVar14;
  
  if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
    puVar11 = &this->field_02CC;
    for (iVar9 = 0x17; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    this->field_02C4 = 0;
    iVar9 = *(int *)&this->field_0x7be;
    if (iVar9 < 1) {
      return 0;
    }
    sVar3 = *(short *)&this->field_0x3d8;
    uVar4 = *(ushort *)&this->field_0x3da;
    sVar5 = *(short *)&this->field_0x3dc;
    *(short *)((int)&this->field_05E0 + 2) = sVar3;
    *(short *)&this->field_05DC = sVar3;
    *(ushort *)&this->field_05E4 = uVar4;
    *(ushort *)((int)&this->field_05DC + 2) = uVar4;
    *(short *)((int)&this->field_05E4 + 2) = sVar5;
    *(short *)&this->field_05E0 = sVar5;
    if (((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || ((short)uVar4 < 0)) ||
        (((SHORT_007fb242 <= (short)uVar4 || (sVar5 < 0)) ||
         ((SHORT_007fb244 <= sVar5 ||
          (*(short *)(DAT_007fb280 +
                     ((int)SHORT_007fb278 * (int)(short)uVar4 + (int)SHORT_007fb27e * (int)sVar5 +
                     (int)sVar3) * 2) != 0)))))) ||
       (((-1 < sVar3 && (sVar3 < SHORT_007fb240)) &&
        ((-1 < (short)uVar4 &&
         ((((((short)uVar4 < SHORT_007fb242 && (-1 < sVar5)) && (sVar5 < SHORT_007fb244)) &&
           (g_worldCells
            [(int)SHORT_007fb246 * (int)sVar5 + (int)SHORT_007fb240 * (int)(short)uVar4 + (int)sVar3
            ].objects[1] != (STWorldObject *)0x0)) &&
          ((iVar7 = g_worldCells
                    [(int)SHORT_007fb246 * (int)sVar5 + (int)SHORT_007fb240 * (int)(short)uVar4 +
                     (int)sVar3].objects[1]->value_20, iVar7 == 0x5a || (iVar7 == 0x1ae)))))))))) {
      psVar1 = (short *)((int)&this->field_05E0 + 2);
      uVar13 = (undefined2)((uint)psVar1 >> 0x10);
      iVar9 = thunk_FUN_0048dfd0(this,CONCAT22((short)((uint)iVar9 >> 0x10),sVar3),(uint)uVar4,
                                 CONCAT22((short)((uint)in_EDX >> 0x10),sVar5),
                                 CONCAT22(uVar13,this->field_0047),
                                 (int *)CONCAT22(uVar13,this->field_0049),
                                 CONCAT22(uVar13,this->field_004B),(short *)0x1,psVar1,
                                 (short *)&this->field_05E4);
      if (iVar9 == 0) {
        return 0;
      }
    }
    sVar3 = *(short *)((int)&this->field_05E4 + 2);
    sVar5 = *(short *)((int)&this->field_05E0 + 2);
    this->field_05E8 = 0;
    sub_00481520(this,(int)sVar5,(int)*(short *)&this->field_05E4,(int)sVar3);
    iVar9 = sub_00460260(this,0);
    return (-(uint)(iVar9 != -1) & 3) - 1;
  }
  if (this->field_05E8 == 0) {
    iVar9 = sub_00460260(this,2);
    uVar13 = (undefined2)((uint)(iVar9 + 1) >> 0x10);
    switch(iVar9 + 1) {
    case 0:
      iVar9 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x311d,0,0,&DAT_007a4ccc,
                                 s_STBoatC__SetMine__SETMINE_MOVE_e_007ab0e0);
      if (iVar9 != 0) {
        pcVar8 = (code *)swi(3);
        iVar9 = (*pcVar8)();
        return iVar9;
      }
      return 0xffff;
    case 1:
      this->field_05E8 = 1;
      return 2;
    case 2:
      sVar3 = *(short *)((int)&this->field_05E0 + 2);
      sVar5 = *(short *)&this->field_05E4;
      sVar2 = *(short *)((int)&this->field_05E4 + 2);
      *(short *)&this->field_05DC = sVar3;
      *(short *)((int)&this->field_05DC + 2) = sVar5;
      *(short *)&this->field_05E0 = sVar2;
      if (((((((sVar3 < 0) || (SHORT_007fb240 <= sVar3)) || (sVar5 < 0)) ||
            ((SHORT_007fb242 <= sVar5 || (sVar2 < 0)))) || (SHORT_007fb244 <= sVar2)) ||
          (*(short *)(DAT_007fb280 +
                     ((int)SHORT_007fb278 * (int)sVar5 + (int)SHORT_007fb27e * (int)sVar2 +
                     (int)sVar3) * 2) != 0)) ||
         ((((-1 < sVar3 && (sVar3 < SHORT_007fb240)) &&
           ((-1 < sVar5 && (((sVar5 < SHORT_007fb242 && (-1 < sVar2)) && (sVar2 < SHORT_007fb244))))
           )) && ((g_worldCells
                   [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar5 + (int)sVar3
                   ].objects[1] != (STWorldObject *)0x0 &&
                  ((iVar9 = g_worldCells
                            [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar5 +
                             (int)sVar3].objects[1]->value_20, iVar9 == 0x5a || (iVar9 == 0x1ae)))))
          ))) {
        psVar1 = (short *)((int)&this->field_05E0 + 2);
        uVar12 = (undefined2)((uint)psVar1 >> 0x10);
        iVar9 = thunk_FUN_0048dfd0(this,CONCAT22(uVar13,sVar3),CONCAT22(extraout_var,sVar5),
                                   CONCAT22(extraout_var_00,sVar2),CONCAT22(uVar12,this->field_0047)
                                   ,(int *)CONCAT22(uVar12,this->field_0049),
                                   CONCAT22(uVar12,this->field_004B),(short *)0x1,psVar1,
                                   (short *)&this->field_05E4);
        if (iVar9 == 0) {
          return 0;
        }
      }
      sub_004602B0(this);
      break;
    default:
      goto switchD_004761eb_caseD_3;
    case 4:
      sVar3 = *(short *)((int)&this->field_05E0 + 2);
      sVar5 = *(short *)&this->field_05E4;
      sVar2 = *(short *)((int)&this->field_05E4 + 2);
      *(short *)&this->field_05DC = sVar3;
      *(short *)((int)&this->field_05DC + 2) = sVar5;
      *(short *)&this->field_05E0 = sVar2;
      if ((((((-1 < sVar3) && (sVar3 < SHORT_007fb240)) &&
            ((-1 < sVar5 && (((sVar5 < SHORT_007fb242 && (-1 < sVar2)) && (sVar2 < SHORT_007fb244)))
             ))) && (g_worldCells
                     [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar5 +
                      (int)sVar3].objects[0] != (STWorldObject *)0x0)) ||
          ((sVar3 < 0 || (SHORT_007fb240 <= sVar3)))) ||
         ((((sVar5 < 0 || ((SHORT_007fb242 <= sVar5 || (sVar2 < 0)))) ||
           ((SHORT_007fb244 <= sVar2 ||
            (*(short *)(DAT_007fb280 +
                       ((int)SHORT_007fb278 * (int)sVar5 + (int)SHORT_007fb27e * (int)sVar2 +
                       (int)sVar3) * 2) != 0)))) ||
          (((((-1 < sVar3 && (sVar3 < SHORT_007fb240)) && (-1 < sVar5)) &&
            (((sVar5 < SHORT_007fb242 && (-1 < sVar2)) &&
             ((sVar2 < SHORT_007fb244 &&
              (g_worldCells
               [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar5 + (int)sVar3].
               objects[1] != (STWorldObject *)0x0)))))) &&
           ((iVar9 = g_worldCells
                     [(int)SHORT_007fb246 * (int)sVar2 + (int)SHORT_007fb240 * (int)sVar5 +
                      (int)sVar3].objects[1]->value_20, iVar9 == 0x5a || (iVar9 == 0x1ae)))))))) {
        psVar1 = (short *)((int)&this->field_05E0 + 2);
        uVar12 = (undefined2)((uint)psVar1 >> 0x10);
        iVar9 = thunk_FUN_0048dfd0(this,CONCAT22(uVar13,sVar3),CONCAT22(extraout_var,sVar5),
                                   CONCAT22(extraout_var_00,sVar2),CONCAT22(uVar12,this->field_0047)
                                   ,(int *)CONCAT22(uVar12,this->field_0049),
                                   CONCAT22(uVar12,this->field_004B),(short *)0x1,psVar1,
                                   (short *)&this->field_05E4);
        if (iVar9 == 0) {
          return 0;
        }
      }
    }
    sub_00481520(this,(int)*(short *)((int)&this->field_05E0 + 2),(int)*(short *)&this->field_05E4,
                 (int)*(short *)((int)&this->field_05E4 + 2));
    sub_00460260(this,0);
switchD_004761eb_caseD_3:
    return 2;
  }
  if (this->field_05E8 != 1) goto LAB_00476633;
  SVar6 = this->field_06F7;
  if (SVar6 == CASE_5) {
    pSVar10 = this->vtable;
    uVar14 = 0xe6;
LAB_004765df:
    (*pSVar10->vfunc_90)(3,uVar14);
  }
  else if (SVar6 == CASE_11) {
    (*this->vtable->vfunc_90)(3,0x14a);
  }
  else if (SVar6 == CASE_21) {
    pSVar10 = this->vtable;
    uVar14 = 0x1cb;
    goto LAB_004765df;
  }
  thunk_FUN_00627850(*(undefined4 *)&this->field_0x7b6,*(undefined4 *)&this->field_0x24,
                     this->field_0018,(uint)(ushort)this->field_0032,(int)this->field_0041,
                     (int)this->field_0043,this->field_0045 + -10,this->field_06F3,(char *)0x0,
                     0xffffffff);
  *(int *)&this->field_0x7be = *(int *)&this->field_0x7be + -1;
LAB_00476633:
  iVar9 = (*this->vtable->vfunc_D8)();
  return -(uint)(iVar9 != 0);
}

