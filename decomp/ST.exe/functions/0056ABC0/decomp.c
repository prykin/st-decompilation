
void __thiscall FUN_0056abc0(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;

  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_1 == nullptr) {
    if (*(char *)((int)this + 0x1474) != '\0') {
      if (g_visibleClass_00802A88 != nullptr) {
        bVar4 = 0;
        puVar5 = nullptr;
        pcVar7 = (char *)((int)this + 0x11c9);
        do {
          if ((*pcVar7 != -1) && (bVar4 != *(byte *)((int)this + 0x112d))) {
            VisibleClassTy::sub_0055B7F0(g_visibleClass_00802A88,0,puVar5);
          }
          bVar4 = bVar4 + 1;
          puVar5 = puVar5 + 1;
          pcVar7 = pcVar7 + 0x51;
        } while (bVar4 < 8);
      }
      *(undefined1 *)((int)this + 0x1474) = 0;
    }
  }
  else if ((*(char *)((int)this + 0x1474) == '\0') &&
          (*(undefined1 *)((int)this + 0x1474) = 1, g_visibleClass_00802A88 != nullptr
          )) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (char *)((int)this + 0x11c9);
    bVar3 = 0;
    puVar5 = nullptr;
    pbVar6 = &g_bulkInitializedRecords_008087C7[0].field_0023;
    bVar4 = DAT_0080874d;
    do {
      if ((*param_1 != -1) && (bVar3 != *(byte *)((int)this + 0x112d))) {
        if (DAT_00808a8f == '\0') {
          if (bVar4 == bVar3) {
LAB_0056acb1:
            iVar2 = 0;
          }
          else {
            cVar1 = puVar5[(int)(g_playerRelationMatrix + bVar4)];
            if ((cVar1 == '\0') && (g_playerRelationMatrix[(int)puVar5][bVar4] == 0)) {
              iVar2 = -2;
            }
            else if ((cVar1 == '\x01') && (g_playerRelationMatrix[(int)puVar5][bVar4] == 0)) {
              iVar2 = -1;
            }
            else if ((cVar1 == '\0') && (g_playerRelationMatrix[(int)puVar5][bVar4] == 1)) {
              iVar2 = 1;
            }
            else {
              if ((cVar1 != '\x01') || (g_playerRelationMatrix[(int)puVar5][bVar4] != 1))
              goto LAB_0056acb1;
              iVar2 = 2;
            }
          }
          bVar8 = iVar2 < 0;
        }
        else {
          bVar8 = *pbVar6 != g_bulkInitializedRecords_008087C7[bVar4].field_0023;
          bVar4 = DAT_0080874d;
        }
        if (!bVar8) {
          VisibleClassTy::sub_0055B7F0(g_visibleClass_00802A88,1,puVar5);
          bVar4 = DAT_0080874d;
        }
      }
      bVar3 = bVar3 + 1;
      puVar5 = puVar5 + 1;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = param_1 + 0x51;
      pbVar6 = pbVar6 + 0x51;
      if (7 < bVar3) {
        return;
      }
    } while( true );
  }
  return;
}

