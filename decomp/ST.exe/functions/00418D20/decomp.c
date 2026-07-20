
uint FUN_00418d20(short param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6)

{
  STWorldObject *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  
  sVar7 = param_5 - param_2;
  sVar5 = param_6 - param_3;
  if ((short)(param_4 - param_1) == 1) {
    if (sVar7 != 1) {
      if (param_5 != param_2) {
        if (sVar7 != -1) {
          return 0xffffffff;
        }
        if (sVar5 != 1) {
          if (param_6 == param_3) {
            if (g_worldCells
                [(param_2 + -1) * (int)SHORT_007fb240 + (int)param_1 +
                 (int)SHORT_007fb246 * (int)param_3].objects[0] == (STWorldObject *)0x0) {
              return (uint)(g_worldCells
                            [(int)param_2 * (int)SHORT_007fb240 + (int)param_1 +
                             (int)SHORT_007fb246 * (int)param_3 + 1].objects[0] !=
                           (STWorldObject *)0x0);
            }
            return 1;
          }
          if (sVar5 != -1) {
            return 0xffffffff;
          }
          iVar4 = (param_2 + -1) * (int)SHORT_007fb240;
          iVar6 = (int)param_3 * (int)SHORT_007fb246;
          iVar3 = (int)param_1;
          iVar2 = iVar3 + iVar6 + iVar4;
          if (g_worldCells[iVar2].objects[0] != (STWorldObject *)0x0) {
            return 1;
          }
          iVar8 = (int)param_2 * (int)SHORT_007fb240;
          if (g_worldCells[iVar6 + iVar3 + iVar8 + 1].objects[0] != (STWorldObject *)0x0) {
            return 1;
          }
          if (g_worldCells[iVar2 + 1].objects[0] != (STWorldObject *)0x0) {
            return 1;
          }
          iVar2 = (param_3 + -1) * (int)SHORT_007fb246;
          if (g_worldCells[iVar4 + iVar3 + iVar2].objects[0] != (STWorldObject *)0x0) {
            return 1;
          }
          iVar2 = iVar2 + iVar3 + iVar8;
          if (g_worldCells[iVar2 + 1].objects[0] != (STWorldObject *)0x0) {
            return 1;
          }
          goto LAB_004192c9;
        }
        iVar4 = (param_2 + -1) * (int)SHORT_007fb240;
        iVar6 = (int)param_3 * (int)SHORT_007fb246;
        iVar3 = (int)param_1;
        iVar2 = iVar3 + iVar6 + iVar4;
        if (g_worldCells[iVar2].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        iVar8 = (int)param_2 * (int)SHORT_007fb240;
        if (g_worldCells[iVar6 + iVar3 + iVar8 + 1].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        if (g_worldCells[iVar2 + 1].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        iVar2 = (param_3 + 1) * (int)SHORT_007fb246;
        if (g_worldCells[iVar4 + iVar3 + iVar2].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        iVar2 = iVar2 + iVar3 + iVar8;
        if (g_worldCells[iVar2 + 1].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        goto LAB_00419240;
      }
      if (sVar5 != 1) {
        if (param_6 == param_3) {
          return 0;
        }
        if (sVar5 != -1) {
          return 0xffffffff;
        }
        iVar2 = (int)SHORT_007fb240 * (int)param_2;
        if (g_worldCells[(int)param_3 * (int)SHORT_007fb246 + (int)param_1 + iVar2 + 1].objects[0]
            != (STWorldObject *)0x0) {
          return 1;
        }
LAB_00418fbd:
        iVar3 = param_3 + -1;
        goto LAB_00418fbe;
      }
      iVar2 = (int)SHORT_007fb240 * (int)param_2;
      pSVar1 = g_worldCells[(int)param_3 * (int)SHORT_007fb246 + (int)param_1 + iVar2 + 1].objects
               [0];
LAB_00418f58:
      if (pSVar1 != (STWorldObject *)0x0) {
        return 1;
      }
      iVar3 = param_3 + 1;
LAB_00418fbe:
      return (uint)(g_worldCells[iVar3 * SHORT_007fb246 + (int)param_1 + iVar2].objects[0] !=
                   (STWorldObject *)0x0);
    }
    if (sVar5 == 1) {
      iVar3 = (int)param_3 * (int)SHORT_007fb246;
      iVar6 = (int)param_2 * (int)SHORT_007fb240;
      iVar2 = (int)param_1;
      if (g_worldCells[iVar2 + iVar3 + iVar6 + 1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      iVar4 = (param_2 + 1) * (int)SHORT_007fb240;
      iVar3 = iVar3 + iVar4 + iVar2;
      if (g_worldCells[iVar3].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      if (g_worldCells[iVar3 + 1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      iVar3 = (param_3 + 1) * (int)SHORT_007fb246;
      iVar2 = iVar6 + iVar2 + iVar3;
      if (g_worldCells[iVar2 + 1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
LAB_00418ef4:
      if (g_worldCells[iVar4 + param_1 + iVar3].objects[0] == (STWorldObject *)0x0) {
        return (uint)(g_worldCells[iVar2].objects[0] != (STWorldObject *)0x0);
      }
      return 1;
    }
    if (param_6 != param_3) {
      if (sVar5 != -1) {
        return 0xffffffff;
      }
      iVar3 = (int)param_3 * (int)SHORT_007fb246;
      iVar6 = (int)param_2 * (int)SHORT_007fb240;
      iVar2 = (int)param_1;
      if (g_worldCells[iVar2 + iVar3 + iVar6 + 1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      iVar4 = (param_2 + 1) * (int)SHORT_007fb240;
      iVar3 = iVar3 + iVar4 + iVar2;
      if (g_worldCells[iVar3].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      if (g_worldCells[iVar3 + 1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      iVar3 = (param_3 + -1) * (int)SHORT_007fb246;
      iVar2 = iVar6 + iVar2 + iVar3;
      if (g_worldCells[iVar2 + 1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      goto LAB_00418ef4;
    }
    iVar2 = (int)SHORT_007fb246 * (int)param_3;
    if (g_worldCells[(int)param_2 * (int)SHORT_007fb240 + (int)param_1 + iVar2 + 1].objects[0] !=
        (STWorldObject *)0x0) {
      return 1;
    }
LAB_00418e38:
    iVar3 = param_2 + 1;
LAB_00418e39:
    return (uint)(g_worldCells[iVar3 * SHORT_007fb240 + (int)param_1 + iVar2].objects[0] !=
                 (STWorldObject *)0x0);
  }
  if (param_4 != param_1) {
    if ((short)(param_4 - param_1) != -1) {
      return 0xffffffff;
    }
    if (sVar7 == 1) {
      if (sVar5 != 1) {
        if (param_6 != param_3) {
          if (sVar5 != -1) {
            return 0xffffffff;
          }
          iVar3 = (int)param_3 * (int)SHORT_007fb246;
          iVar6 = (int)param_2 * (int)SHORT_007fb240;
          iVar2 = (int)param_1;
          if (g_worldCells[iVar2 + iVar3 + iVar6 + -1].objects[0] != (STWorldObject *)0x0) {
            return 1;
          }
          iVar4 = (param_2 + 1) * (int)SHORT_007fb240;
          iVar3 = iVar4 + iVar2 + iVar3;
          if (g_worldCells[iVar3].objects[0] != (STWorldObject *)0x0) {
            return 1;
          }
          if (g_worldCells[iVar3 + -1].objects[0] == (STWorldObject *)0x0) {
            iVar3 = (param_3 + -1) * (int)SHORT_007fb246;
            iVar6 = iVar6 + iVar2 + iVar3;
            if (g_worldCells[iVar6 + -1].objects[0] != (STWorldObject *)0x0) {
              return 1;
            }
            if (g_worldCells[iVar4 + iVar2 + iVar3].objects[0] == (STWorldObject *)0x0) {
              return (uint)(g_worldCells[iVar6].objects[0] != (STWorldObject *)0x0);
            }
            return 1;
          }
          return 1;
        }
        iVar2 = (int)SHORT_007fb246 * (int)param_3;
        if (g_worldCells[(int)param_2 * (int)SHORT_007fb240 + (int)param_1 + iVar2 + -1].objects[0]
            != (STWorldObject *)0x0) {
          return 1;
        }
        goto LAB_00418e38;
      }
      iVar3 = (int)param_3 * (int)SHORT_007fb246;
      iVar6 = (int)param_2 * (int)SHORT_007fb240;
      iVar2 = (int)param_1;
      if (g_worldCells[iVar2 + iVar3 + iVar6 + -1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      iVar4 = (param_2 + 1) * (int)SHORT_007fb240;
      iVar3 = iVar4 + iVar2 + iVar3;
      if (g_worldCells[iVar3].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      if (g_worldCells[iVar3 + -1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      iVar3 = (param_3 + 1) * (int)SHORT_007fb246;
      iVar6 = iVar6 + iVar2 + iVar3;
      if (g_worldCells[iVar6 + -1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      pSVar1 = g_worldCells[iVar4 + iVar2 + iVar3].objects[0];
    }
    else {
      if (param_5 == param_2) {
        if (sVar5 != 1) {
          if (param_6 == param_3) {
            return 0;
          }
          if (sVar5 != -1) {
            return 0xffffffff;
          }
          iVar2 = (int)SHORT_007fb240 * (int)param_2;
          if (g_worldCells[(int)param_3 * (int)SHORT_007fb246 + (int)param_1 + iVar2 + -1].objects
              [0] != (STWorldObject *)0x0) {
            return 1;
          }
          goto LAB_00418fbd;
        }
        iVar2 = (int)SHORT_007fb240 * (int)param_2;
        pSVar1 = g_worldCells[(int)param_3 * (int)SHORT_007fb246 + (int)param_1 + iVar2 + -1].
                 objects[0];
        goto LAB_00418f58;
      }
      if (sVar7 != -1) {
        return 0xffffffff;
      }
      if (sVar5 == 1) {
        iVar3 = (int)param_3 * (int)SHORT_007fb246;
        iVar6 = (int)param_2 * (int)SHORT_007fb240;
        iVar2 = (int)param_1;
        if (g_worldCells[iVar2 + iVar3 + iVar6 + -1].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        iVar4 = (param_2 + -1) * (int)SHORT_007fb240;
        iVar3 = iVar3 + iVar2 + iVar4;
        if (g_worldCells[iVar3].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        if (g_worldCells[iVar3 + -1].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        iVar3 = (param_3 + 1) * (int)SHORT_007fb246;
        iVar6 = iVar6 + iVar2 + iVar3;
        if (g_worldCells[iVar6 + -1].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        if (g_worldCells[iVar2 + iVar4 + iVar3].objects[0] != (STWorldObject *)0x0) {
          return 1;
        }
        goto LAB_00419446;
      }
      if (param_6 == param_3) {
        iVar2 = (int)SHORT_007fb246 * (int)param_3;
        if (g_worldCells[(int)param_2 * (int)SHORT_007fb240 + (int)param_1 + iVar2 + -1].objects[0]
            != (STWorldObject *)0x0) {
          return 1;
        }
        iVar3 = param_2 + -1;
        goto LAB_00418e39;
      }
      if (sVar5 != -1) {
        return 0xffffffff;
      }
      iVar3 = (int)param_3 * (int)SHORT_007fb246;
      iVar6 = (int)param_2 * (int)SHORT_007fb240;
      iVar2 = (int)param_1;
      if (g_worldCells[iVar2 + iVar3 + iVar6 + -1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      iVar4 = (param_2 + -1) * (int)SHORT_007fb240;
      iVar3 = iVar3 + iVar2 + iVar4;
      if (g_worldCells[iVar3].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      if (g_worldCells[iVar3 + -1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      iVar3 = (param_3 + -1) * (int)SHORT_007fb246;
      iVar6 = iVar6 + iVar2 + iVar3;
      if (g_worldCells[iVar6 + -1].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      pSVar1 = g_worldCells[iVar2 + iVar4 + iVar3].objects[0];
    }
    if (pSVar1 != (STWorldObject *)0x0) {
      return 1;
    }
LAB_00419446:
    return (uint)(g_worldCells[iVar6].objects[0] != (STWorldObject *)0x0);
  }
  if (sVar7 == 1) {
    if (sVar5 != 1) {
      if (param_6 == param_3) {
        return 0;
      }
      if (sVar5 != -1) {
        return 0xffffffff;
      }
      iVar2 = (param_2 + 1) * (int)SHORT_007fb240;
      iVar3 = (int)param_3 * (int)SHORT_007fb246;
LAB_00419296:
      _param_4 = (int)param_3;
      if (g_worldCells[iVar3 + param_1 + iVar2].objects[0] != (STWorldObject *)0x0) {
        return 1;
      }
      iVar2 = (int)param_2 * (int)SHORT_007fb240 +
              (int)param_1 + (_param_4 + -1) * (int)SHORT_007fb246;
LAB_004192c9:
      return (uint)(g_worldCells[iVar2].objects[0] != (STWorldObject *)0x0);
    }
    iVar2 = (param_2 + 1) * (int)SHORT_007fb240;
    iVar3 = (int)param_3 * (int)SHORT_007fb246;
  }
  else {
    if (param_5 == param_2) {
      return 0;
    }
    if (sVar7 != -1) {
      return 0xffffffff;
    }
    if (sVar5 != 1) {
      if (param_6 == param_3) {
        return 0;
      }
      if (sVar5 != -1) {
        return 0xffffffff;
      }
      iVar2 = (param_2 + -1) * (int)SHORT_007fb240;
      iVar3 = (int)param_3 * (int)SHORT_007fb246;
      goto LAB_00419296;
    }
    iVar2 = (param_2 + -1) * (int)SHORT_007fb240;
    iVar3 = (int)param_3 * (int)SHORT_007fb246;
  }
  _param_4 = (int)param_3;
  if (g_worldCells[iVar3 + param_1 + iVar2].objects[0] != (STWorldObject *)0x0) {
    return 1;
  }
  iVar2 = (int)param_2 * (int)SHORT_007fb240 + (int)param_1 + (_param_4 + 1) * (int)SHORT_007fb246;
LAB_00419240:
  return (uint)(g_worldCells[iVar2].objects[0] != (STWorldObject *)0x0);
}

