
int __thiscall FUN_00668f50(void *this,char *param_1,uint param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  int local_8;

  iVar6 = 0;
  local_8 = 0;
  if (param_2 == 0) {
    if (param_1 == (char *)0x9) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar2 = (**(code **)(*(int *)this + 0x18))();
      if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) && ((&DAT_008087e9)[uVar2 * 0x51] != -1)) {
        *param_3 = uVar2;
        return 1;
      }
    }
    else if (((int)param_1 < 0) || (7 < (int)param_1)) {
      if (param_1 == (char *)0x8) {
        if (DAT_0080874d != 0xff) {
          *param_3 = (uint)DAT_0080874d;
          return 1;
        }
      }
      else if (param_1 == (char *)0xff) {
        uVar2 = 0;
        pcVar3 = &DAT_008087e9;
        do {
          if (*pcVar3 != -1) {
            *param_3 = uVar2;
            iVar6 = iVar6 + 1;
            param_3 = param_3 + 1;
          }
          pcVar3 = pcVar3 + 0x51;
          uVar2 = uVar2 + 1;
        } while ((int)pcVar3 < 0x808a71);
        return iVar6;
      }
    }
    else if ((&DAT_008087e9)[(int)param_1 * 0x51] != -1) {
      *param_3 = (uint)param_1;
      return 1;
    }
  }
  else {
    bVar5 = (byte)param_1;
    if (param_2 == 0xffffffff) {
      if (param_1 == (char *)0x9) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar2 = (**(code **)(*(int *)this + 0x18))();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) && ((&DAT_008087e9)[uVar2 * 0x51] != -1)) {
          uVar7 = 0;
          pcVar3 = &DAT_008087e9;
          do {
            if ((uVar7 != uVar2) && (*pcVar3 != -1)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)uVar7,(byte)uVar2);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uVar2 & 0xff) * 0x51] !=
                        (&DAT_008087ea)[(uVar7 & 0xff) * 0x51];
              }
              if (bVar9) {
                local_8 = local_8 + 1;
                *param_3 = uVar7;
                param_3 = param_3 + 1;
              }
            }
            pcVar3 = pcVar3 + 0x51;
            uVar7 = uVar7 + 1;
          } while ((int)pcVar3 < 0x808a71);
          return local_8;
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          uVar2 = 0;
          pcVar3 = &DAT_008087e9;
          do {
            if ((uVar2 != DAT_0080874d) && (*pcVar3 != -1)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)uVar2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                        (&DAT_008087ea)[(uVar2 & 0xff) * 0x51];
              }
              if (bVar9) {
                *param_3 = uVar2;
                local_8 = local_8 + 1;
                param_3 = param_3 + 1;
              }
            }
            pcVar3 = pcVar3 + 0x51;
            uVar2 = uVar2 + 1;
          } while ((int)pcVar3 < 0x808a71);
          return local_8;
        }
      }
      else if ((&DAT_008087e9)[(int)param_1 * 0x51] != -1) {
        pcVar8 = (char *)0x0;
        pcVar3 = &DAT_008087e9;
        do {
          if ((pcVar8 != param_1) && (*pcVar3 != -1)) {
            if (DAT_00808a8f == '\0') {
              iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)pcVar8,bVar5);
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = (&DAT_008087ea)[((uint)param_1 & 0xff) * 0x51] !=
                      (&DAT_008087ea)[((uint)pcVar8 & 0xff) * 0x51];
            }
            if (bVar9) {
              local_8 = local_8 + 1;
              *param_3 = (uint)pcVar8;
              param_3 = param_3 + 1;
            }
          }
          pcVar3 = pcVar3 + 0x51;
          pcVar8 = pcVar8 + 1;
        } while ((int)pcVar3 < 0x808a71);
        return local_8;
      }
    }
    else if (param_2 == 1) {
      if (param_1 == (char *)0x9) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar2 = (**(code **)(*(int *)this + 0x18))();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) && ((&DAT_008087e9)[uVar2 * 0x51] != -1)) {
          uVar7 = 0;
          pcVar3 = &DAT_008087e9;
          do {
            if (*pcVar3 != -1) {
              if (DAT_00808a8f == '\0') {
                iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)uVar7,(byte)uVar2);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uVar2 & 0xff) * 0x51] !=
                        (&DAT_008087ea)[(uVar7 & 0xff) * 0x51];
              }
              if (!bVar9) {
                local_8 = local_8 + 1;
                *param_3 = uVar7;
                param_3 = param_3 + 1;
              }
            }
            pcVar3 = pcVar3 + 0x51;
            uVar7 = uVar7 + 1;
          } while ((int)pcVar3 < 0x808a71);
          return local_8;
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          uVar2 = 0;
          pcVar3 = &DAT_008087e9;
          do {
            if (*pcVar3 != -1) {
              if (DAT_00808a8f == '\0') {
                iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)uVar2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                        (&DAT_008087ea)[(uVar2 & 0xff) * 0x51];
              }
              if (!bVar9) {
                *param_3 = uVar2;
                local_8 = local_8 + 1;
                param_3 = param_3 + 1;
              }
            }
            pcVar3 = pcVar3 + 0x51;
            uVar2 = uVar2 + 1;
          } while ((int)pcVar3 < 0x808a71);
          return local_8;
        }
      }
      else if ((&DAT_008087e9)[(int)param_1 * 0x51] != -1) {
        uVar2 = 0;
        pcVar3 = &DAT_008087e9;
        do {
          if (*pcVar3 != -1) {
            if (DAT_00808a8f == '\0') {
              iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)uVar2,bVar5);
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = (&DAT_008087ea)[((uint)param_1 & 0xff) * 0x51] !=
                      (&DAT_008087ea)[(uVar2 & 0xff) * 0x51];
            }
            if (!bVar9) {
              local_8 = local_8 + 1;
              *param_3 = uVar2;
              param_3 = param_3 + 1;
            }
          }
          pcVar3 = pcVar3 + 0x51;
          uVar2 = uVar2 + 1;
        } while ((int)pcVar3 < 0x808a71);
        return local_8;
      }
    }
    else if (param_2 == 2) {
      if (param_1 == (char *)0x9) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar2 = (**(code **)(*(int *)this + 0x18))();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) && ((&DAT_008087e9)[uVar2 * 0x51] != -1)) {
          uVar7 = 0;
          pcVar3 = &DAT_008087e9;
          do {
            if ((uVar7 != uVar2) && (*pcVar3 != -1)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)uVar7,(byte)uVar2);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uVar2 & 0xff) * 0x51] !=
                        (&DAT_008087ea)[(uVar7 & 0xff) * 0x51];
              }
              if (!bVar9) {
                local_8 = local_8 + 1;
                *param_3 = uVar7;
                param_3 = param_3 + 1;
              }
            }
            pcVar3 = pcVar3 + 0x51;
            uVar7 = uVar7 + 1;
          } while ((int)pcVar3 < 0x808a71);
          return local_8;
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          uVar2 = 0;
          pcVar3 = &DAT_008087e9;
          do {
            if ((uVar2 != DAT_0080874d) && (*pcVar3 != -1)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)uVar2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                        (&DAT_008087ea)[(uVar2 & 0xff) * 0x51];
              }
              if (!bVar9) {
                *param_3 = uVar2;
                local_8 = local_8 + 1;
                param_3 = param_3 + 1;
              }
            }
            pcVar3 = pcVar3 + 0x51;
            uVar2 = uVar2 + 1;
          } while ((int)pcVar3 < 0x808a71);
          return local_8;
        }
      }
      else if ((&DAT_008087e9)[(int)param_1 * 0x51] != -1) {
        pcVar3 = (char *)0x0;
        pcVar8 = &DAT_008087e9;
        do {
          if ((pcVar3 != param_1) && (*pcVar8 != -1)) {
            if (DAT_00808a8f == '\0') {
              if ((byte)pcVar3 == bVar5) {
                iVar6 = 0;
              }
              else {
                uVar2 = (uint)pcVar3 & 0xff;
                uVar7 = (uint)param_1 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar2][uVar7];
                if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                  iVar6 = 1;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                  iVar6 = 2;
                }
                else {
                  iVar6 = 0;
                }
              }
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = (&DAT_008087ea)[((uint)param_1 & 0xff) * 0x51] !=
                      (&DAT_008087ea)[((uint)pcVar3 & 0xff) * 0x51];
            }
            if (!bVar9) {
              *param_3 = (uint)pcVar3;
              local_8 = local_8 + 1;
              param_3 = param_3 + 1;
            }
          }
          pcVar8 = pcVar8 + 0x51;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar8 < 0x808a71);
        return local_8;
      }
    }
    else if (param_2 == 3) {
      if (param_1 == (char *)0x9) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar2 = (**(code **)(*(int *)this + 0x18))();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) && ((&DAT_008087e9)[uVar2 * 0x51] != -1)) {
          param_2 = 0;
          pcVar3 = &DAT_008087e9;
          do {
            if (*pcVar3 != -1) {
              if (DAT_00808a8f == '\0') {
                if ((char)param_2 == (char)uVar2) {
LAB_00669807:
                  iVar6 = 0;
                }
                else {
                  uVar7 = param_2 & 0xff;
                  uVar4 = uVar2 & 0xff;
                  bVar5 = g_playerRelationMatrix[uVar7][uVar4];
                  if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar5 != 1) || (g_playerRelationMatrix[uVar4][uVar7] != 1))
                    goto LAB_00669807;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uVar2 & 0xff) * 0x51] !=
                        (&DAT_008087ea)[(param_2 & 0xff) * 0x51];
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  if ((char)uVar2 == (char)param_2) {
LAB_006698b9:
                    iVar6 = 0;
                  }
                  else {
                    uVar7 = param_2 & 0xff;
                    uVar4 = uVar2 & 0xff;
                    bVar5 = g_playerRelationMatrix[uVar4][uVar7];
                    if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
                      iVar6 = -2;
                    }
                    else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar7][uVar4] == 0)) {
                      iVar6 = -1;
                    }
                    else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar4] == 1)) {
                      iVar6 = 1;
                    }
                    else {
                      if ((bVar5 != 1) || (g_playerRelationMatrix[uVar7][uVar4] != 1))
                      goto LAB_006698b9;
                      iVar6 = 2;
                    }
                  }
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = (&DAT_008087ea)[(param_2 & 0xff) * 0x51] !=
                          (&DAT_008087ea)[(uVar2 & 0xff) * 0x51];
                }
                if (!bVar9) {
                  *param_3 = param_2;
                  local_8 = local_8 + 1;
                  param_3 = param_3 + 1;
                }
              }
            }
            pcVar3 = pcVar3 + 0x51;
            param_2 = param_2 + 1;
            if (0x808a70 < (int)pcVar3) {
              return local_8;
            }
          } while( true );
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          param_2 = 0;
          param_1 = &DAT_008087e9;
          bVar5 = DAT_0080874d;
          do {
            if (*param_1 != -1) {
              if (DAT_00808a8f == '\0') {
                if ((byte)param_2 == bVar5) {
LAB_00669b3a:
                  iVar6 = 0;
                }
                else {
                  uVar2 = param_2 & 0xff;
                  bVar1 = g_playerRelationMatrix[uVar2][bVar5];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[bVar5][uVar2] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar5][uVar2] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar5][uVar2] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[bVar5][uVar2] != 1))
                    goto LAB_00669b3a;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uint)bVar5 * 0x51] !=
                        (&DAT_008087ea)[(param_2 & 0xff) * 0x51];
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  iVar6 = thunk_FUN_005822e0(&DAT_00807620,bVar5,(byte)param_2);
                  bVar9 = iVar6 < 0;
                  bVar5 = DAT_0080874d;
                }
                else {
                  bVar9 = (&DAT_008087ea)[(param_2 & 0xff) * 0x51] !=
                          (&DAT_008087ea)[(uint)bVar5 * 0x51];
                }
                if (!bVar9) {
                  local_8 = local_8 + 1;
                  *param_3 = param_2;
                  param_3 = param_3 + 1;
                  bVar5 = DAT_0080874d;
                }
              }
            }
            param_1 = param_1 + 0x51;
            param_2 = param_2 + 1;
            if (0x808a70 < (int)param_1) {
              return local_8;
            }
          } while( true );
        }
      }
      else if ((&DAT_008087e9)[(int)param_1 * 0x51] != -1) {
        param_2 = 0;
        pcVar3 = &DAT_008087e9;
        do {
          if (*pcVar3 != -1) {
            if (DAT_00808a8f == '\0') {
              iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)param_2,bVar5);
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = (&DAT_008087ea)[((uint)param_1 & 0xff) * 0x51] !=
                      (&DAT_008087ea)[(param_2 & 0xff) * 0x51];
            }
            if (!bVar9) {
              if (DAT_00808a8f == '\0') {
                if (bVar5 == (byte)param_2) {
LAB_00669a2a:
                  iVar6 = 0;
                }
                else {
                  uVar7 = param_2 & 0xff;
                  uVar2 = (uint)param_1 & 0xff;
                  bVar1 = g_playerRelationMatrix[uVar2][uVar7];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                    goto LAB_00669a2a;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(param_2 & 0xff) * 0x51] !=
                        (&DAT_008087ea)[((uint)param_1 & 0xff) * 0x51];
              }
              if (!bVar9) {
                *param_3 = param_2;
                local_8 = local_8 + 1;
                param_3 = param_3 + 1;
              }
            }
          }
          pcVar3 = pcVar3 + 0x51;
          param_2 = param_2 + 1;
          if (0x808a70 < (int)pcVar3) {
            return local_8;
          }
        } while( true );
      }
    }
    else if (param_2 == 4) {
      if (param_1 == (char *)0x9) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar2 = (**(code **)(*(int *)this + 0x18))();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) && ((&DAT_008087e9)[uVar2 * 0x51] != -1)) {
          param_2 = 0;
          pcVar3 = &DAT_008087e9;
          do {
            if ((param_2 != uVar2) && (*pcVar3 != -1)) {
              if (DAT_00808a8f == '\0') {
                if ((byte)param_2 == (byte)uVar2) {
LAB_00669cdc:
                  iVar6 = 0;
                }
                else {
                  uVar7 = param_2 & 0xff;
                  uVar4 = uVar2 & 0xff;
                  bVar5 = g_playerRelationMatrix[uVar7][uVar4];
                  if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar5 != 1) || (g_playerRelationMatrix[uVar4][uVar7] != 1))
                    goto LAB_00669cdc;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uVar2 & 0xff) * 0x51] !=
                        (&DAT_008087ea)[(param_2 & 0xff) * 0x51];
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)uVar2,(byte)param_2);
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = (&DAT_008087ea)[(param_2 & 0xff) * 0x51] !=
                          (&DAT_008087ea)[(uVar2 & 0xff) * 0x51];
                }
                if (!bVar9) {
                  *param_3 = param_2;
                  local_8 = local_8 + 1;
                  param_3 = param_3 + 1;
                }
              }
            }
            pcVar3 = pcVar3 + 0x51;
            param_2 = param_2 + 1;
            if (0x808a70 < (int)pcVar3) {
              return local_8;
            }
          } while( true );
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          param_2 = 0;
          param_1 = &DAT_008087e9;
          do {
            if ((param_2 != DAT_0080874d) && (*param_1 != -1)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)param_2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                        (&DAT_008087ea)[(param_2 & 0xff) * 0x51];
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  if (DAT_0080874d == (byte)param_2) {
LAB_0066a08e:
                    iVar6 = 0;
                  }
                  else {
                    uVar7 = param_2 & 0xff;
                    uVar2 = (uint)DAT_0080874d;
                    bVar5 = g_playerRelationMatrix[uVar2][uVar7];
                    if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                      iVar6 = -2;
                    }
                    else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                      iVar6 = -1;
                    }
                    else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                      iVar6 = 1;
                    }
                    else {
                      if ((bVar5 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                      goto LAB_0066a08e;
                      iVar6 = 2;
                    }
                  }
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = (&DAT_008087ea)[(param_2 & 0xff) * 0x51] !=
                          (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
                }
                if (!bVar9) {
                  *param_3 = param_2;
                  local_8 = local_8 + 1;
                  param_3 = param_3 + 1;
                }
              }
            }
            param_1 = param_1 + 0x51;
            param_2 = param_2 + 1;
            if (0x808a70 < (int)param_1) {
              return local_8;
            }
          } while( true );
        }
      }
      else if ((&DAT_008087e9)[(int)param_1 * 0x51] != -1) {
        param_2 = 0;
        pcVar3 = &DAT_008087e9;
        do {
          if (((char *)param_2 != param_1) && (*pcVar3 != -1)) {
            if (DAT_00808a8f == '\0') {
              if ((byte)param_2 == bVar5) {
LAB_00669e52:
                iVar6 = 0;
              }
              else {
                uVar2 = param_2 & 0xff;
                uVar7 = (uint)param_1 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar2][uVar7];
                if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                  iVar6 = 1;
                }
                else {
                  if ((bVar1 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                  goto LAB_00669e52;
                  iVar6 = 2;
                }
              }
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = (&DAT_008087ea)[((uint)param_1 & 0xff) * 0x51] !=
                      (&DAT_008087ea)[(param_2 & 0xff) * 0x51];
            }
            if (!bVar9) {
              if (DAT_00808a8f == '\0') {
                if (bVar5 == (byte)param_2) {
LAB_00669f03:
                  iVar6 = 0;
                }
                else {
                  uVar2 = param_2 & 0xff;
                  uVar7 = (uint)param_1 & 0xff;
                  bVar1 = g_playerRelationMatrix[uVar7][uVar2];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[uVar2][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar2][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar2][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[uVar2][uVar7] != 1))
                    goto LAB_00669f03;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(param_2 & 0xff) * 0x51] !=
                        (&DAT_008087ea)[((uint)param_1 & 0xff) * 0x51];
              }
              if (!bVar9) {
                *param_3 = param_2;
                local_8 = local_8 + 1;
                param_3 = param_3 + 1;
              }
            }
          }
          pcVar3 = pcVar3 + 0x51;
          param_2 = param_2 + 1;
          if (0x808a70 < (int)pcVar3) {
            return local_8;
          }
        } while( true );
      }
    }
    else if (param_2 == 0xfffffffe) {
      if (param_1 == (char *)0x9) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        uVar2 = (**(code **)(*(int *)this + 0x18))();
        if (((-1 < (int)uVar2) && ((int)uVar2 < 8)) && ((&DAT_008087e9)[uVar2 * 0x51] != -1)) {
          param_2 = 0;
          pcVar3 = &DAT_008087e9;
          do {
            if ((param_2 != uVar2) && (*pcVar3 != -1)) {
              if (DAT_00808a8f == '\0') {
                if ((byte)param_2 == (byte)uVar2) {
LAB_0066a1c9:
                  iVar6 = 0;
                }
                else {
                  uVar7 = param_2 & 0xff;
                  uVar4 = uVar2 & 0xff;
                  bVar5 = g_playerRelationMatrix[uVar7][uVar4];
                  if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar4][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar4][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar5 != 1) || (g_playerRelationMatrix[uVar4][uVar7] != 1))
                    goto LAB_0066a1c9;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uVar2 & 0xff) * 0x51] !=
                        (&DAT_008087ea)[(param_2 & 0xff) * 0x51];
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)uVar2,(byte)param_2);
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = (&DAT_008087ea)[(param_2 & 0xff) * 0x51] !=
                          (&DAT_008087ea)[(uVar2 & 0xff) * 0x51];
                }
                if (!bVar9) goto LAB_0066a23c;
              }
              *param_3 = param_2;
              local_8 = local_8 + 1;
              param_3 = param_3 + 1;
            }
LAB_0066a23c:
            pcVar3 = pcVar3 + 0x51;
            param_2 = param_2 + 1;
            if (0x808a70 < (int)pcVar3) {
              return local_8;
            }
          } while( true );
        }
      }
      else if (((int)param_1 < 0) || (7 < (int)param_1)) {
        if ((param_1 == (char *)0x8) && (DAT_0080874d != 0xff)) {
          param_2 = 0;
          param_1 = &DAT_008087e9;
          do {
            if ((param_2 != DAT_0080874d) && (*param_1 != -1)) {
              if (DAT_00808a8f == '\0') {
                iVar6 = thunk_FUN_005822e0(&DAT_00807620,(byte)param_2,DAT_0080874d);
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                        (&DAT_008087ea)[(param_2 & 0xff) * 0x51];
              }
              if (!bVar9) {
                if (DAT_00808a8f == '\0') {
                  if (DAT_0080874d == (byte)param_2) {
LAB_0066a57d:
                    iVar6 = 0;
                  }
                  else {
                    uVar7 = param_2 & 0xff;
                    uVar2 = (uint)DAT_0080874d;
                    bVar5 = g_playerRelationMatrix[uVar2][uVar7];
                    if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                      iVar6 = -2;
                    }
                    else if ((bVar5 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                      iVar6 = -1;
                    }
                    else if ((bVar5 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                      iVar6 = 1;
                    }
                    else {
                      if ((bVar5 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                      goto LAB_0066a57d;
                      iVar6 = 2;
                    }
                  }
                  bVar9 = iVar6 < 0;
                }
                else {
                  bVar9 = (&DAT_008087ea)[(param_2 & 0xff) * 0x51] !=
                          (&DAT_008087ea)[(uint)DAT_0080874d * 0x51];
                }
                if (!bVar9) goto LAB_0066a598;
              }
              *param_3 = param_2;
              local_8 = local_8 + 1;
              param_3 = param_3 + 1;
            }
LAB_0066a598:
            param_1 = param_1 + 0x51;
            param_2 = param_2 + 1;
          } while ((int)param_1 < 0x808a71);
        }
      }
      else if ((&DAT_008087e9)[(int)param_1 * 0x51] != -1) {
        param_2 = 0;
        pcVar3 = &DAT_008087e9;
        do {
          if (((char *)param_2 != param_1) && (*pcVar3 != -1)) {
            if (DAT_00808a8f == '\0') {
              if ((byte)param_2 == bVar5) {
LAB_0066a341:
                iVar6 = 0;
              }
              else {
                uVar2 = param_2 & 0xff;
                uVar7 = (uint)param_1 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar2][uVar7];
                if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -2;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar7][uVar2] == 0)) {
                  iVar6 = -1;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar7][uVar2] == 1)) {
                  iVar6 = 1;
                }
                else {
                  if ((bVar1 != 1) || (g_playerRelationMatrix[uVar7][uVar2] != 1))
                  goto LAB_0066a341;
                  iVar6 = 2;
                }
              }
              bVar9 = iVar6 < 0;
            }
            else {
              bVar9 = (&DAT_008087ea)[((uint)param_1 & 0xff) * 0x51] !=
                      (&DAT_008087ea)[(param_2 & 0xff) * 0x51];
            }
            if (!bVar9) {
              if (DAT_00808a8f == '\0') {
                if (bVar5 == (byte)param_2) {
LAB_0066a3f2:
                  iVar6 = 0;
                }
                else {
                  uVar2 = param_2 & 0xff;
                  uVar7 = (uint)param_1 & 0xff;
                  bVar1 = g_playerRelationMatrix[uVar7][uVar2];
                  if ((bVar1 == 0) && (g_playerRelationMatrix[uVar2][uVar7] == 0)) {
                    iVar6 = -2;
                  }
                  else if ((bVar1 == 1) && (g_playerRelationMatrix[uVar2][uVar7] == 0)) {
                    iVar6 = -1;
                  }
                  else if ((bVar1 == 0) && (g_playerRelationMatrix[uVar2][uVar7] == 1)) {
                    iVar6 = 1;
                  }
                  else {
                    if ((bVar1 != 1) || (g_playerRelationMatrix[uVar2][uVar7] != 1))
                    goto LAB_0066a3f2;
                    iVar6 = 2;
                  }
                }
                bVar9 = iVar6 < 0;
              }
              else {
                bVar9 = (&DAT_008087ea)[(param_2 & 0xff) * 0x51] !=
                        (&DAT_008087ea)[((uint)param_1 & 0xff) * 0x51];
              }
              if (!bVar9) goto LAB_0066a419;
            }
            *param_3 = param_2;
            local_8 = local_8 + 1;
            param_3 = param_3 + 1;
          }
LAB_0066a419:
          pcVar3 = pcVar3 + 0x51;
          param_2 = param_2 + 1;
          if (0x808a70 < (int)pcVar3) {
            return local_8;
          }
        } while( true );
      }
    }
  }
  return local_8;
}

