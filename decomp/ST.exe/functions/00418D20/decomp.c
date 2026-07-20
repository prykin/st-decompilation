
uint FUN_00418d20(short param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  
  sVar6 = param_5 - param_2;
  sVar4 = param_6 - param_3;
  if ((short)(param_4 - param_1) == 1) {
    if (sVar6 != 1) {
      if (param_5 != param_2) {
        if (sVar6 != -1) {
          return 0xffffffff;
        }
        if (sVar4 != 1) {
          if (param_6 == param_3) {
            if (*(int *)(DAT_007fb248 +
                        ((param_2 + -1) * (int)SHORT_007fb240 + (int)param_1 +
                        (int)SHORT_007fb246 * (int)param_3) * 8) == 0) {
              return (uint)(*(int *)(DAT_007fb248 + 8 +
                                    ((int)param_2 * (int)SHORT_007fb240 + (int)param_1 +
                                    (int)SHORT_007fb246 * (int)param_3) * 8) != 0);
            }
            return 1;
          }
          if (sVar4 != -1) {
            return 0xffffffff;
          }
          iVar3 = (param_2 + -1) * (int)SHORT_007fb240;
          iVar5 = (int)param_3 * (int)SHORT_007fb246;
          iVar2 = (int)param_1;
          iVar1 = iVar2 + iVar5 + iVar3;
          if (*(int *)(DAT_007fb248 + iVar1 * 8) != 0) {
            return 1;
          }
          iVar7 = (int)param_2 * (int)SHORT_007fb240;
          if (*(int *)(DAT_007fb248 + 8 + (iVar5 + iVar2 + iVar7) * 8) != 0) {
            return 1;
          }
          if (*(int *)(DAT_007fb248 + 8 + iVar1 * 8) != 0) {
            return 1;
          }
          iVar1 = (param_3 + -1) * (int)SHORT_007fb246;
          if (*(int *)(DAT_007fb248 + (iVar3 + iVar2 + iVar1) * 8) != 0) {
            return 1;
          }
          iVar1 = iVar1 + iVar2 + iVar7;
          if (*(int *)(DAT_007fb248 + 8 + iVar1 * 8) != 0) {
            return 1;
          }
          goto LAB_004192c9;
        }
        iVar3 = (param_2 + -1) * (int)SHORT_007fb240;
        iVar5 = (int)param_3 * (int)SHORT_007fb246;
        iVar2 = (int)param_1;
        iVar1 = iVar2 + iVar5 + iVar3;
        if (*(int *)(DAT_007fb248 + iVar1 * 8) != 0) {
          return 1;
        }
        iVar7 = (int)param_2 * (int)SHORT_007fb240;
        if (*(int *)(DAT_007fb248 + 8 + (iVar5 + iVar2 + iVar7) * 8) != 0) {
          return 1;
        }
        if (*(int *)(DAT_007fb248 + 8 + iVar1 * 8) != 0) {
          return 1;
        }
        iVar1 = (param_3 + 1) * (int)SHORT_007fb246;
        if (*(int *)(DAT_007fb248 + (iVar3 + iVar2 + iVar1) * 8) != 0) {
          return 1;
        }
        iVar1 = iVar1 + iVar2 + iVar7;
        if (*(int *)(DAT_007fb248 + 8 + iVar1 * 8) != 0) {
          return 1;
        }
        goto LAB_00419240;
      }
      if (sVar4 != 1) {
        if (param_6 == param_3) {
          return 0;
        }
        if (sVar4 != -1) {
          return 0xffffffff;
        }
        iVar1 = (int)SHORT_007fb240 * (int)param_2;
        if (*(int *)(DAT_007fb248 + 8 +
                    ((int)param_3 * (int)SHORT_007fb246 + (int)param_1 + iVar1) * 8) != 0) {
          return 1;
        }
LAB_00418fbd:
        iVar2 = param_3 + -1;
        goto LAB_00418fbe;
      }
      iVar1 = (int)SHORT_007fb240 * (int)param_2;
      iVar2 = *(int *)(DAT_007fb248 + 8 +
                      ((int)param_3 * (int)SHORT_007fb246 + (int)param_1 + iVar1) * 8);
LAB_00418f58:
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = param_3 + 1;
LAB_00418fbe:
      return (uint)(*(int *)(DAT_007fb248 + (iVar2 * SHORT_007fb246 + (int)param_1 + iVar1) * 8) !=
                   0);
    }
    if (sVar4 == 1) {
      iVar2 = (int)param_3 * (int)SHORT_007fb246;
      iVar5 = (int)param_2 * (int)SHORT_007fb240;
      iVar1 = (int)param_1;
      if (*(int *)(DAT_007fb248 + 8 + (iVar1 + iVar2 + iVar5) * 8) != 0) {
        return 1;
      }
      iVar3 = (param_2 + 1) * (int)SHORT_007fb240;
      iVar2 = iVar2 + iVar3 + iVar1;
      if (*(int *)(DAT_007fb248 + iVar2 * 8) != 0) {
        return 1;
      }
      if (*(int *)(DAT_007fb248 + 8 + iVar2 * 8) != 0) {
        return 1;
      }
      iVar2 = (param_3 + 1) * (int)SHORT_007fb246;
      iVar1 = iVar5 + iVar1 + iVar2;
      if (*(int *)(DAT_007fb248 + 8 + iVar1 * 8) != 0) {
        return 1;
      }
LAB_00418ef4:
      if (*(int *)(DAT_007fb248 + (iVar3 + param_1 + iVar2) * 8) == 0) {
        return (uint)(*(int *)(DAT_007fb248 + iVar1 * 8) != 0);
      }
      return 1;
    }
    if (param_6 != param_3) {
      if (sVar4 != -1) {
        return 0xffffffff;
      }
      iVar2 = (int)param_3 * (int)SHORT_007fb246;
      iVar5 = (int)param_2 * (int)SHORT_007fb240;
      iVar1 = (int)param_1;
      if (*(int *)(DAT_007fb248 + 8 + (iVar1 + iVar2 + iVar5) * 8) != 0) {
        return 1;
      }
      iVar3 = (param_2 + 1) * (int)SHORT_007fb240;
      iVar2 = iVar2 + iVar3 + iVar1;
      if (*(int *)(DAT_007fb248 + iVar2 * 8) != 0) {
        return 1;
      }
      if (*(int *)(DAT_007fb248 + 8 + iVar2 * 8) != 0) {
        return 1;
      }
      iVar2 = (param_3 + -1) * (int)SHORT_007fb246;
      iVar1 = iVar5 + iVar1 + iVar2;
      if (*(int *)(DAT_007fb248 + 8 + iVar1 * 8) != 0) {
        return 1;
      }
      goto LAB_00418ef4;
    }
    iVar1 = (int)SHORT_007fb246 * (int)param_3;
    if (*(int *)(DAT_007fb248 + 8 + ((int)param_2 * (int)SHORT_007fb240 + (int)param_1 + iVar1) * 8)
        != 0) {
      return 1;
    }
LAB_00418e38:
    iVar2 = param_2 + 1;
LAB_00418e39:
    return (uint)(*(int *)(DAT_007fb248 + (iVar2 * SHORT_007fb240 + (int)param_1 + iVar1) * 8) != 0)
    ;
  }
  if (param_4 != param_1) {
    if ((short)(param_4 - param_1) != -1) {
      return 0xffffffff;
    }
    if (sVar6 == 1) {
      if (sVar4 != 1) {
        if (param_6 != param_3) {
          if (sVar4 != -1) {
            return 0xffffffff;
          }
          iVar2 = (int)param_3 * (int)SHORT_007fb246;
          iVar5 = (int)param_2 * (int)SHORT_007fb240;
          iVar1 = (int)param_1;
          if (*(int *)(DAT_007fb248 + -8 + (iVar1 + iVar2 + iVar5) * 8) != 0) {
            return 1;
          }
          iVar3 = (param_2 + 1) * (int)SHORT_007fb240;
          iVar2 = iVar3 + iVar1 + iVar2;
          if (*(int *)(DAT_007fb248 + iVar2 * 8) != 0) {
            return 1;
          }
          if (*(int *)(DAT_007fb248 + iVar2 * 8 + -8) == 0) {
            iVar2 = (param_3 + -1) * (int)SHORT_007fb246;
            iVar5 = iVar5 + iVar1 + iVar2;
            if (*(int *)(DAT_007fb248 + -8 + iVar5 * 8) != 0) {
              return 1;
            }
            if (*(int *)(DAT_007fb248 + (iVar3 + iVar1 + iVar2) * 8) == 0) {
              return (uint)(*(int *)(DAT_007fb248 + iVar5 * 8) != 0);
            }
            return 1;
          }
          return 1;
        }
        iVar1 = (int)SHORT_007fb246 * (int)param_3;
        if (*(int *)(DAT_007fb248 + -8 +
                    ((int)param_2 * (int)SHORT_007fb240 + (int)param_1 + iVar1) * 8) != 0) {
          return 1;
        }
        goto LAB_00418e38;
      }
      iVar2 = (int)param_3 * (int)SHORT_007fb246;
      iVar5 = (int)param_2 * (int)SHORT_007fb240;
      iVar1 = (int)param_1;
      if (*(int *)(DAT_007fb248 + -8 + (iVar1 + iVar2 + iVar5) * 8) != 0) {
        return 1;
      }
      iVar3 = (param_2 + 1) * (int)SHORT_007fb240;
      iVar2 = iVar3 + iVar1 + iVar2;
      if (*(int *)(DAT_007fb248 + iVar2 * 8) != 0) {
        return 1;
      }
      if (*(int *)(DAT_007fb248 + iVar2 * 8 + -8) != 0) {
        return 1;
      }
      iVar2 = (param_3 + 1) * (int)SHORT_007fb246;
      iVar5 = iVar5 + iVar1 + iVar2;
      if (*(int *)(DAT_007fb248 + -8 + iVar5 * 8) != 0) {
        return 1;
      }
      iVar1 = *(int *)(DAT_007fb248 + (iVar3 + iVar1 + iVar2) * 8);
    }
    else {
      if (param_5 == param_2) {
        if (sVar4 != 1) {
          if (param_6 == param_3) {
            return 0;
          }
          if (sVar4 != -1) {
            return 0xffffffff;
          }
          iVar1 = (int)SHORT_007fb240 * (int)param_2;
          if (*(int *)(DAT_007fb248 + -8 +
                      ((int)param_3 * (int)SHORT_007fb246 + (int)param_1 + iVar1) * 8) != 0) {
            return 1;
          }
          goto LAB_00418fbd;
        }
        iVar1 = (int)SHORT_007fb240 * (int)param_2;
        iVar2 = *(int *)(DAT_007fb248 + -8 +
                        ((int)param_3 * (int)SHORT_007fb246 + (int)param_1 + iVar1) * 8);
        goto LAB_00418f58;
      }
      if (sVar6 != -1) {
        return 0xffffffff;
      }
      if (sVar4 == 1) {
        iVar2 = (int)param_3 * (int)SHORT_007fb246;
        iVar5 = (int)param_2 * (int)SHORT_007fb240;
        iVar1 = (int)param_1;
        if (*(int *)(DAT_007fb248 + -8 + (iVar1 + iVar2 + iVar5) * 8) != 0) {
          return 1;
        }
        iVar3 = (param_2 + -1) * (int)SHORT_007fb240;
        iVar2 = iVar2 + iVar1 + iVar3;
        if (*(int *)(DAT_007fb248 + iVar2 * 8) != 0) {
          return 1;
        }
        if (*(int *)(DAT_007fb248 + iVar2 * 8 + -8) != 0) {
          return 1;
        }
        iVar2 = (param_3 + 1) * (int)SHORT_007fb246;
        iVar5 = iVar5 + iVar1 + iVar2;
        if (*(int *)(DAT_007fb248 + -8 + iVar5 * 8) != 0) {
          return 1;
        }
        if (*(int *)(DAT_007fb248 + (iVar1 + iVar3 + iVar2) * 8) != 0) {
          return 1;
        }
        goto LAB_00419446;
      }
      if (param_6 == param_3) {
        iVar1 = (int)SHORT_007fb246 * (int)param_3;
        if (*(int *)(DAT_007fb248 + -8 +
                    ((int)param_2 * (int)SHORT_007fb240 + (int)param_1 + iVar1) * 8) != 0) {
          return 1;
        }
        iVar2 = param_2 + -1;
        goto LAB_00418e39;
      }
      if (sVar4 != -1) {
        return 0xffffffff;
      }
      iVar2 = (int)param_3 * (int)SHORT_007fb246;
      iVar5 = (int)param_2 * (int)SHORT_007fb240;
      iVar1 = (int)param_1;
      if (*(int *)(DAT_007fb248 + -8 + (iVar1 + iVar2 + iVar5) * 8) != 0) {
        return 1;
      }
      iVar3 = (param_2 + -1) * (int)SHORT_007fb240;
      iVar2 = iVar2 + iVar1 + iVar3;
      if (*(int *)(DAT_007fb248 + iVar2 * 8) != 0) {
        return 1;
      }
      if (*(int *)(DAT_007fb248 + iVar2 * 8 + -8) != 0) {
        return 1;
      }
      iVar2 = (param_3 + -1) * (int)SHORT_007fb246;
      iVar5 = iVar5 + iVar1 + iVar2;
      if (*(int *)(DAT_007fb248 + -8 + iVar5 * 8) != 0) {
        return 1;
      }
      iVar1 = *(int *)(DAT_007fb248 + (iVar1 + iVar3 + iVar2) * 8);
    }
    if (iVar1 != 0) {
      return 1;
    }
LAB_00419446:
    return (uint)(*(int *)(DAT_007fb248 + iVar5 * 8) != 0);
  }
  if (sVar6 == 1) {
    if (sVar4 != 1) {
      if (param_6 == param_3) {
        return 0;
      }
      if (sVar4 != -1) {
        return 0xffffffff;
      }
      iVar1 = (param_2 + 1) * (int)SHORT_007fb240;
      iVar2 = (int)param_3 * (int)SHORT_007fb246;
LAB_00419296:
      _param_4 = (int)param_3;
      if (*(int *)(DAT_007fb248 + (iVar2 + param_1 + iVar1) * 8) != 0) {
        return 1;
      }
      iVar1 = (int)param_2 * (int)SHORT_007fb240 +
              (int)param_1 + (_param_4 + -1) * (int)SHORT_007fb246;
LAB_004192c9:
      return (uint)(*(int *)(DAT_007fb248 + iVar1 * 8) != 0);
    }
    iVar1 = (param_2 + 1) * (int)SHORT_007fb240;
    iVar2 = (int)param_3 * (int)SHORT_007fb246;
  }
  else {
    if (param_5 == param_2) {
      return 0;
    }
    if (sVar6 != -1) {
      return 0xffffffff;
    }
    if (sVar4 != 1) {
      if (param_6 == param_3) {
        return 0;
      }
      if (sVar4 != -1) {
        return 0xffffffff;
      }
      iVar1 = (param_2 + -1) * (int)SHORT_007fb240;
      iVar2 = (int)param_3 * (int)SHORT_007fb246;
      goto LAB_00419296;
    }
    iVar1 = (param_2 + -1) * (int)SHORT_007fb240;
    iVar2 = (int)param_3 * (int)SHORT_007fb246;
  }
  _param_4 = (int)param_3;
  if (*(int *)(DAT_007fb248 + (iVar2 + param_1 + iVar1) * 8) != 0) {
    return 1;
  }
  iVar1 = (int)param_2 * (int)SHORT_007fb240 + (int)param_1 + (_param_4 + 1) * (int)SHORT_007fb246;
LAB_00419240:
  return (uint)(*(int *)(DAT_007fb248 + iVar1 * 8) != 0);
}

