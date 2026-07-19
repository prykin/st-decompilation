STAppC::GetMessage:
0056FA60  55                        PUSH EBP
0056FA61  8B EC                     MOV EBP,ESP
0056FA63  81 EC A0 09 00 00         SUB ESP,0x9a0
0056FA69  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0056FA6E  53                        PUSH EBX
0056FA6F  56                        PUSH ESI
0056FA70  57                        PUSH EDI
0056FA71  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0056FA74  33 FF                     XOR EDI,EDI
0056FA76  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
0056FA7C  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
0056FA82  57                        PUSH EDI
0056FA83  52                        PUSH EDX
0056FA84  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
0056FA8A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056FA90  E8 5B DD 1B 00            CALL 0x0072d7f0
0056FA95  8B F0                     MOV ESI,EAX
0056FA97  83 C4 08                  ADD ESP,0x8
0056FA9A  3B F7                     CMP ESI,EDI
0056FA9C  0F 85 F2 11 00 00         JNZ 0x00570c94
0056FAA2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0056FAA5  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0056FAA8  56                        PUSH ESI
0056FAA9  8B CB                     MOV ECX,EBX
0056FAAB  E8 A0 56 17 00            CALL 0x006e5150
0056FAB0  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0056FAB3  3D 1F 61 00 00            CMP EAX,0x611f
0056FAB8  0F 87 AC 06 00 00         JA 0x0057016a
0056FABE  0F 84 FB 07 00 00         JZ 0x005702bf
0056FAC4  05 01 9F FF FF            ADD EAX,0xffff9f01
0056FAC9  83 F8 0B                  CMP EAX,0xb
0056FACC  0F 87 AB 11 00 00         JA 0x00570c7d
switchD_0056fad2::switchD:
0056FAD2  FF 24 85 E4 0C 57 00      JMP dword ptr [EAX*0x4 + 0x570ce4]
switchD_0056fad2::caseD_60ff:
0056FAD9  39 BB C3 0F 00 00         CMP dword ptr [EBX + 0xfc3],EDI
0056FADF  74 14                     JZ 0x0056faf5
0056FAE1  E8 3A 23 15 00            CALL 0x006c1e20
0056FAE6  B9 60 00 00 00            MOV ECX,0x60
0056FAEB  33 C0                     XOR EAX,EAX
0056FAED  8D BB 43 0E 00 00         LEA EDI,[EBX + 0xe43]
0056FAF3  F3 AB                     STOSD.REP ES:EDI
LAB_0056faf5:
0056FAF5  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0056FAFB  C6 81 93 04 00 00 00      MOV byte ptr [ECX + 0x493],0x0
0056FB02  E8 51 35 E9 FF            CALL 0x00403058
0056FB07  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0056FB0C  85 C0                     TEST EAX,EAX
0056FB0E  74 08                     JZ 0x0056fb18
0056FB10  50                        PUSH EAX
0056FB11  8B CB                     MOV ECX,EBX
0056FB13  E8 68 50 17 00            CALL 0x006e4b80
LAB_0056fb18:
0056FB18  BF A0 16 80 00            MOV EDI,0x8016a0
0056FB1D  83 C9 FF                  OR ECX,0xffffffff
0056FB20  33 C0                     XOR EAX,EAX
0056FB22  8D 93 02 7A 00 00         LEA EDX,[EBX + 0x7a02]
0056FB28  F2 AE                     SCASB.REPNE ES:EDI
0056FB2A  F7 D1                     NOT ECX
0056FB2C  2B F9                     SUB EDI,ECX
0056FB2E  8B C1                     MOV EAX,ECX
0056FB30  8B F7                     MOV ESI,EDI
0056FB32  8B FA                     MOV EDI,EDX
0056FB34  C1 E9 02                  SHR ECX,0x2
0056FB37  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FB39  8B C8                     MOV ECX,EAX
0056FB3B  83 E1 03                  AND ECX,0x3
0056FB3E  F3 A4                     MOVSB.REP ES:EDI,ESI
0056FB40  8B CB                     MOV ECX,EBX
0056FB42  E8 49 3E E9 FF            CALL 0x00403990
0056FB47  8B CB                     MOV ECX,EBX
0056FB49  E8 5D 50 E9 FF            CALL 0x00404bab
0056FB4E  8A 83 80 11 00 00         MOV AL,byte ptr [EBX + 0x1180]
0056FB54  3C 09                     CMP AL,0x9
0056FB56  72 10                     JC 0x0056fb68
0056FB58  3C 0C                     CMP AL,0xc
0056FB5A  0F 86 1D 11 00 00         JBE 0x00570c7d
0056FB60  3C 10                     CMP AL,0x10
0056FB62  0F 84 15 11 00 00         JZ 0x00570c7d
LAB_0056fb68:
0056FB68  B9 66 06 00 00            MOV ECX,0x666
0056FB6D  8D B3 96 11 00 00         LEA ESI,[EBX + 0x1196]
0056FB73  8D BB 2F 2B 00 00         LEA EDI,[EBX + 0x2b2f]
0056FB79  33 C0                     XOR EAX,EAX
0056FB7B  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FB7D  A4                        MOVSB ES:EDI,ESI
0056FB7E  8B 8B 0A 4F 00 00         MOV ECX,dword ptr [EBX + 0x4f0a]
0056FB84  8D B3 1B 6E 00 00         LEA ESI,[EBX + 0x6e1b]
0056FB8A  89 8B C8 44 00 00         MOV dword ptr [EBX + 0x44c8],ECX
0056FB90  B9 00 01 00 00            MOV ECX,0x100
0056FB95  8D BB CC 44 00 00         LEA EDI,[EBX + 0x44cc]
0056FB9B  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FB9D  A0 4D 87 80 00            MOV AL,[0x0080874d]
0056FBA2  B9 05 00 00 00            MOV ECX,0x5
0056FBA7  8D BB CC 48 00 00         LEA EDI,[EBX + 0x48cc]
0056FBAD  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0056FBB0  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0056FBB3  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0056FBB6  C1 E2 04                  SHL EDX,0x4
0056FBB9  03 D0                     ADD EDX,EAX
0056FBBB  33 C0                     XOR EAX,EAX
0056FBBD  8D 34 55 0B 51 7F 00      LEA ESI,[EDX*0x2 + 0x7f510b]
0056FBC4  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FBC6  A0 4D 87 80 00            MOV AL,[0x0080874d]
0056FBCB  B9 05 00 00 00            MOV ECX,0x5
0056FBD0  8D BB E0 48 00 00         LEA EDI,[EBX + 0x48e0]
0056FBD6  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0056FBD9  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0056FBDC  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0056FBDF  C1 E2 04                  SHL EDX,0x4
0056FBE2  03 D0                     ADD EDX,EAX
0056FBE4  33 C0                     XOR EAX,EAX
0056FBE6  8D 34 55 1F 51 7F 00      LEA ESI,[EDX*0x2 + 0x7f511f]
0056FBED  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FBEF  A0 4D 87 80 00            MOV AL,[0x0080874d]
0056FBF4  B9 9B 00 00 00            MOV ECX,0x9b
0056FBF9  8D BB F4 48 00 00         LEA EDI,[EBX + 0x48f4]
0056FBFF  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0056FC02  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0056FC05  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0056FC08  C1 E2 04                  SHL EDX,0x4
0056FC0B  03 D0                     ADD EDX,EAX
0056FC0D  33 C0                     XOR EAX,EAX
0056FC0F  8D 34 55 47 51 7F 00      LEA ESI,[EDX*0x2 + 0x7f5147]
0056FC16  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FC18  A0 4D 87 80 00            MOV AL,[0x0080874d]
0056FC1D  B9 6A 00 00 00            MOV ECX,0x6a
0056FC22  8D BB 60 4B 00 00         LEA EDI,[EBX + 0x4b60]
0056FC28  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0056FC2B  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0056FC2E  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0056FC31  C1 E2 04                  SHL EDX,0x4
0056FC34  03 D0                     ADD EDX,EAX
0056FC36  33 C0                     XOR EAX,EAX
0056FC38  8D 34 55 B3 53 7F 00      LEA ESI,[EDX*0x2 + 0x7f53b3]
0056FC3F  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FC41  A0 4D 87 80 00            MOV AL,[0x0080874d]
0056FC46  B9 26 00 00 00            MOV ECX,0x26
0056FC4B  8D BB 08 4D 00 00         LEA EDI,[EBX + 0x4d08]
0056FC51  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0056FC54  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0056FC57  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
0056FC5A  C1 E2 04                  SHL EDX,0x4
0056FC5D  03 D0                     ADD EDX,EAX
0056FC5F  33 C0                     XOR EAX,EAX
0056FC61  8D 34 55 5B 55 7F 00      LEA ESI,[EDX*0x2 + 0x7f555b]
0056FC68  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FC6A  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0056FC70  66 A5                     MOVSW ES:EDI,ESI
0056FC72  A4                        MOVSB ES:EDI,ESI
0056FC73  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056FC79  5F                        POP EDI
0056FC7A  5E                        POP ESI
0056FC7B  5B                        POP EBX
0056FC7C  8B E5                     MOV ESP,EBP
0056FC7E  5D                        POP EBP
0056FC7F  C2 04 00                  RET 0x4
switchD_0056fad2::caseD_6108:
0056FC82  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0056FC88  BE 01 00 00 00            MOV ESI,0x1
0056FC8D  C6 81 93 04 00 00 00      MOV byte ptr [ECX + 0x493],0x0
0056FC94  E8 BF 33 E9 FF            CALL 0x00403058
0056FC99  B9 08 00 00 00            MOV ECX,0x8
0056FC9E  33 C0                     XOR EAX,EAX
0056FCA0  8D 7D C0                  LEA EDI,[EBP + -0x40]
0056FCA3  F3 AB                     STOSD.REP ES:EDI
0056FCA5  8A 83 E1 6C 00 00         MOV AL,byte ptr [EBX + 0x6ce1]
0056FCAB  8A 8B E0 6C 00 00         MOV CL,byte ptr [EBX + 0x6ce0]
0056FCB1  3A C1                     CMP AL,CL
0056FCB3  C7 45 D0 02 61 00 00      MOV dword ptr [EBP + -0x30],0x6102
0056FCBA  72 1F                     JC 0x0056fcdb
0056FCBC  3A 83 E2 6C 00 00         CMP AL,byte ptr [EBX + 0x6ce2]
0056FCC2  72 17                     JC 0x0056fcdb
0056FCC4  84 C0                     TEST AL,AL
0056FCC6  74 13                     JZ 0x0056fcdb
0056FCC8  33 F6                     XOR ESI,ESI
0056FCCA  C7 45 D0 03 61 00 00      MOV dword ptr [EBP + -0x30],0x6103
0056FCD1  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0056FCD4  C6 83 E1 6C 00 00 00      MOV byte ptr [EBX + 0x6ce1],0x0
LAB_0056fcdb:
0056FCDB  85 F6                     TEST ESI,ESI
0056FCDD  0F 84 47 01 00 00         JZ 0x0056fe2a
0056FCE3  3A 8B E1 6C 00 00         CMP CL,byte ptr [EBX + 0x6ce1]
0056FCE9  76 23                     JBE 0x0056fd0e
0056FCEB  3A 8B E2 6C 00 00         CMP CL,byte ptr [EBX + 0x6ce2]
0056FCF1  72 1B                     JC 0x0056fd0e
0056FCF3  84 C9                     TEST CL,CL
0056FCF5  74 17                     JZ 0x0056fd0e
0056FCF7  C7 45 D0 04 61 00 00      MOV dword ptr [EBP + -0x30],0x6104
0056FCFE  C7 45 D4 01 00 00 00      MOV dword ptr [EBP + -0x2c],0x1
0056FD05  C6 83 E0 6C 00 00 00      MOV byte ptr [EBX + 0x6ce0],0x0
0056FD0C  33 F6                     XOR ESI,ESI
LAB_0056fd0e:
0056FD0E  85 F6                     TEST ESI,ESI
0056FD10  0F 84 14 01 00 00         JZ 0x0056fe2a
0056FD16  8A 83 E2 6C 00 00         MOV AL,byte ptr [EBX + 0x6ce2]
0056FD1C  8A 8B E1 6C 00 00         MOV CL,byte ptr [EBX + 0x6ce1]
0056FD22  3A C1                     CMP AL,CL
0056FD24  76 35                     JBE 0x0056fd5b
0056FD26  3A 83 E0 6C 00 00         CMP AL,byte ptr [EBX + 0x6ce0]
0056FD2C  76 2D                     JBE 0x0056fd5b
0056FD2E  F6 05 30 73 80 00 02      TEST byte ptr [0x00807330],0x2
0056FD35  74 1D                     JZ 0x0056fd54
0056FD37  84 C0                     TEST AL,AL
0056FD39  74 20                     JZ 0x0056fd5b
0056FD3B  C7 45 D0 01 71 00 00      MOV dword ptr [EBP + -0x30],0x7101
0056FD42  C7 45 D4 04 00 00 00      MOV dword ptr [EBP + -0x2c],0x4
0056FD49  C6 83 E2 6C 00 00 00      MOV byte ptr [EBX + 0x6ce2],0x0
0056FD50  33 F6                     XOR ESI,ESI
0056FD52  EB 07                     JMP 0x0056fd5b
LAB_0056fd54:
0056FD54  C6 83 E2 6C 00 00 00      MOV byte ptr [EBX + 0x6ce2],0x0
LAB_0056fd5b:
0056FD5B  85 F6                     TEST ESI,ESI
0056FD5D  0F 84 C7 00 00 00         JZ 0x0056fe2a
0056FD63  8A 83 E1 6C 00 00         MOV AL,byte ptr [EBX + 0x6ce1]
0056FD69  84 C0                     TEST AL,AL
0056FD6B  0F 85 B9 00 00 00         JNZ 0x0056fe2a
0056FD71  8A 83 E0 6C 00 00         MOV AL,byte ptr [EBX + 0x6ce0]
0056FD77  84 C0                     TEST AL,AL
0056FD79  0F 85 AB 00 00 00         JNZ 0x0056fe2a
0056FD7F  8A 83 E2 6C 00 00         MOV AL,byte ptr [EBX + 0x6ce2]
0056FD85  84 C0                     TEST AL,AL
0056FD87  0F 85 9D 00 00 00         JNZ 0x0056fe2a
0056FD8D  8A 83 12 50 00 00         MOV AL,byte ptr [EBX + 0x5012]
0056FD93  8D B3 12 50 00 00         LEA ESI,[EBX + 0x5012]
0056FD99  84 C0                     TEST AL,AL
0056FD9B  0F 84 89 00 00 00         JZ 0x0056fe2a
0056FDA1  8D 43 60                  LEA EAX,[EBX + 0x60]
0056FDA4  56                        PUSH ESI
0056FDA5  8D BB F6 76 00 00         LEA EDI,[EBX + 0x76f6]
0056FDAB  50                        PUSH EAX
0056FDAC  68 E4 6E 7C 00            PUSH 0x7c6ee4
0056FDB1  57                        PUSH EDI
0056FDB2  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056FDB8  56                        PUSH ESI
0056FDB9  8D 8B FE 78 00 00         LEA ECX,[EBX + 0x78fe]
0056FDBF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0056FDC4  51                        PUSH ECX
0056FDC5  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0056FDCB  83 C9 FF                  OR ECX,0xffffffff
0056FDCE  33 C0                     XOR EAX,EAX
0056FDD0  83 C4 1C                  ADD ESP,0x1c
0056FDD3  8D 93 FA 77 00 00         LEA EDX,[EBX + 0x77fa]
0056FDD9  F2 AE                     SCASB.REPNE ES:EDI
0056FDDB  F7 D1                     NOT ECX
0056FDDD  2B F9                     SUB EDI,ECX
0056FDDF  8B C1                     MOV EAX,ECX
0056FDE1  8B F7                     MOV ESI,EDI
0056FDE3  8B FA                     MOV EDI,EDX
0056FDE5  C1 E9 02                  SHR ECX,0x2
0056FDE8  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FDEA  8B C8                     MOV ECX,EAX
0056FDEC  83 E1 03                  AND ECX,0x3
0056FDEF  F3 A4                     MOVSB.REP ES:EDI,ESI
0056FDF1  8A 83 80 11 00 00         MOV AL,byte ptr [EBX + 0x1180]
0056FDF7  3C 03                     CMP AL,0x3
0056FDF9  74 0D                     JZ 0x0056fe08
0056FDFB  3C 0B                     CMP AL,0xb
0056FDFD  74 09                     JZ 0x0056fe08
0056FDFF  C6 83 80 11 00 00 08      MOV byte ptr [EBX + 0x1180],0x8
0056FE06  EB 07                     JMP 0x0056fe0f
LAB_0056fe08:
0056FE08  C6 83 80 11 00 00 03      MOV byte ptr [EBX + 0x1180],0x3
LAB_0056fe0f:
0056FE0F  6A 01                     PUSH 0x1
0056FE11  8B CB                     MOV ECX,EBX
0056FE13  E8 34 4D E9 FF            CALL 0x00404b4c
0056FE18  85 C0                     TEST EAX,EAX
0056FE1A  74 0E                     JZ 0x0056fe2a
0056FE1C  C7 45 D0 04 61 00 00      MOV dword ptr [EBP + -0x30],0x6104
0056FE23  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
LAB_0056fe2a:
0056FE2A  81 7D D0 02 61 00 00      CMP dword ptr [EBP + -0x30],0x6102
0056FE31  75 3C                     JNZ 0x0056fe6f
0056FE33  A0 A0 67 80 00            MOV AL,[0x008067a0]
0056FE38  84 C0                     TEST AL,AL
0056FE3A  74 33                     JZ 0x0056fe6f
0056FE3C  A0 98 2A 80 00            MOV AL,[0x00802a98]
0056FE41  84 C0                     TEST AL,AL
0056FE43  74 16                     JZ 0x0056fe5b
0056FE45  B9 90 2A 80 00            MOV ECX,0x802a90
0056FE4A  FF 15 48 C0 85 00         CALL dword ptr [0x0085c048]
0056FE50  85 C0                     TEST EAX,EAX
0056FE52  74 07                     JZ 0x0056fe5b
0056FE54  B8 01 00 00 00            MOV EAX,0x1
0056FE59  EB 02                     JMP 0x0056fe5d
LAB_0056fe5b:
0056FE5B  33 C0                     XOR EAX,EAX
LAB_0056fe5d:
0056FE5D  85 C0                     TEST EAX,EAX
0056FE5F  74 0E                     JZ 0x0056fe6f
0056FE61  C7 45 D0 0A 61 00 00      MOV dword ptr [EBP + -0x30],0x610a
0056FE68  C7 45 D4 06 00 00 00      MOV dword ptr [EBP + -0x2c],0x6
LAB_0056fe6f:
0056FE6F  8B 13                     MOV EDX,dword ptr [EBX]
0056FE71  8D 45 C0                  LEA EAX,[EBP + -0x40]
0056FE74  E9 FE 0D 00 00            JMP 0x00570c77
switchD_0056fad2::caseD_6100:
0056FE79  89 3D 4C 67 80 00         MOV dword ptr [0x0080674c],EDI
0056FE7F  8B 83 C3 0F 00 00         MOV EAX,dword ptr [EBX + 0xfc3]
0056FE85  3B C7                     CMP EAX,EDI
0056FE87  74 14                     JZ 0x0056fe9d
0056FE89  E8 92 1F 15 00            CALL 0x006c1e20
0056FE8E  B9 60 00 00 00            MOV ECX,0x60
0056FE93  33 C0                     XOR EAX,EAX
0056FE95  8D BB 43 0E 00 00         LEA EDI,[EBX + 0xe43]
0056FE9B  F3 AB                     STOSD.REP ES:EDI
LAB_0056fe9d:
0056FE9D  8B CB                     MOV ECX,EBX
0056FE9F  E8 E2 3F E9 FF            CALL 0x00403e86
0056FEA4  8B CB                     MOV ECX,EBX
0056FEA6  E8 05 53 17 00            CALL 0x006e51b0
0056FEAB  89 83 34 11 00 00         MOV dword ptr [EBX + 0x1134],EAX
0056FEB1  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0056FEB7  C6 81 93 04 00 00 00      MOV byte ptr [ECX + 0x493],0x0
0056FEBE  E8 95 31 E9 FF            CALL 0x00403058
0056FEC3  68 3C 16 81 00            PUSH 0x81163c
0056FEC8  8B CB                     MOV ECX,EBX
0056FECA  E8 6F 1E E9 FF            CALL 0x00401d3e
0056FECF  8B CB                     MOV ECX,EBX
0056FED1  E8 8C 36 E9 FF            CALL 0x00403562
0056FED6  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0056FEDB  85 C0                     TEST EAX,EAX
0056FEDD  74 08                     JZ 0x0056fee7
0056FEDF  50                        PUSH EAX
0056FEE0  8B CB                     MOV ECX,EBX
0056FEE2  E8 99 4C 17 00            CALL 0x006e4b80
LAB_0056fee7:
0056FEE7  A1 30 2A 80 00            MOV EAX,[0x00802a30]
0056FEEC  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
0056FEF2  85 C9                     TEST ECX,ECX
0056FEF4  74 14                     JZ 0x0056ff0a
0056FEF6  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0056FEF9  83 F9 FF                  CMP ECX,-0x1
0056FEFC  74 18                     JZ 0x0056ff16
0056FEFE  51                        PUSH ECX
0056FEFF  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
0056FF02  51                        PUSH ECX
0056FF03  E8 E8 3B 14 00            CALL 0x006b3af0
0056FF08  EB 0C                     JMP 0x0056ff16
LAB_0056ff0a:
0056FF0A  8B 90 AD 00 00 00         MOV EDX,dword ptr [EAX + 0xad]
0056FF10  52                        PUSH EDX
0056FF11  E8 FA 8B 14 00            CALL 0x006b8b10
LAB_0056ff16:
0056FF16  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0056FF1B  6A 02                     PUSH 0x2
0056FF1D  6A 0A                     PUSH 0xa
0056FF1F  50                        PUSH EAX
0056FF20  E8 1E 1E E9 FF            CALL 0x00401d43
0056FF25  83 C4 0C                  ADD ESP,0xc
0056FF28  8B CB                     MOV ECX,EBX
0056FF2A  6A 00                     PUSH 0x0
0056FF2C  E8 47 16 E9 FF            CALL 0x00401578
0056FF31  8D BB FA 77 00 00         LEA EDI,[EBX + 0x77fa]
0056FF37  83 C9 FF                  OR ECX,0xffffffff
0056FF3A  33 C0                     XOR EAX,EAX
0056FF3C  8D 93 F6 76 00 00         LEA EDX,[EBX + 0x76f6]
0056FF42  F2 AE                     SCASB.REPNE ES:EDI
0056FF44  F7 D1                     NOT ECX
0056FF46  2B F9                     SUB EDI,ECX
0056FF48  8B C1                     MOV EAX,ECX
0056FF4A  8B F7                     MOV ESI,EDI
0056FF4C  8B FA                     MOV EDI,EDX
0056FF4E  C1 E9 02                  SHR ECX,0x2
0056FF51  F3 A5                     MOVSD.REP ES:EDI,ESI
0056FF53  8B C8                     MOV ECX,EAX
0056FF55  83 E1 03                  AND ECX,0x3
0056FF58  F3 A4                     MOVSB.REP ES:EDI,ESI
0056FF5A  8B CB                     MOV ECX,EBX
0056FF5C  E8 2F 3A E9 FF            CALL 0x00403990
0056FF61  8B CB                     MOV ECX,EBX
0056FF63  E8 43 4C E9 FF            CALL 0x00404bab
0056FF68  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0056FF6E  33 C0                     XOR EAX,EAX
0056FF70  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0056FF76  5F                        POP EDI
0056FF77  5E                        POP ESI
0056FF78  5B                        POP EBX
0056FF79  8B E5                     MOV ESP,EBP
0056FF7B  5D                        POP EBP
0056FF7C  C2 04 00                  RET 0x4
switchD_0056fad2::caseD_6106:
0056FF7F  33 C9                     XOR ECX,ECX
0056FF81  8A 8B 2D 11 00 00         MOV CL,byte ptr [EBX + 0x112d]
0056FF87  8B F9                     MOV EDI,ECX
0056FF89  8D 04 FF                  LEA EAX,[EDI + EDI*0x8]
0056FF8C  8D 14 C3                  LEA EDX,[EBX + EAX*0x8]
0056FF8F  C6 84 10 A7 11 00 00 01   MOV byte ptr [EAX + EDX*0x1 + 0x11a7],0x1
0056FF97  8A 46 16                  MOV AL,byte ptr [ESI + 0x16]
0056FF9A  88 83 2D 11 00 00         MOV byte ptr [EBX + 0x112d],AL
0056FFA0  8A 4E 14                  MOV CL,byte ptr [ESI + 0x14]
0056FFA3  33 C0                     XOR EAX,EAX
0056FFA5  88 8B 2E 11 00 00         MOV byte ptr [EBX + 0x112e],CL
0056FFAB  8A 83 2D 11 00 00         MOV AL,byte ptr [EBX + 0x112d]
0056FFB1  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0056FFB4  8D 14 C3                  LEA EDX,[EBX + EAX*0x8]
0056FFB7  C6 84 10 A7 11 00 00 00   MOV byte ptr [EAX + EDX*0x1 + 0x11a7],0x0
0056FFBF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0056FFC5  85 C9                     TEST ECX,ECX
0056FFC7  74 48                     JZ 0x00570011
0056FFC9  68 21 01 00 00            PUSH 0x121
0056FFCE  E8 DD 57 17 00            CALL 0x006e57b0
0056FFD3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0056FFD9  6A 00                     PUSH 0x0
0056FFDB  6A 00                     PUSH 0x0
0056FFDD  6A 00                     PUSH 0x0
0056FFDF  8B 01                     MOV EAX,dword ptr [ECX]
0056FFE1  6A 00                     PUSH 0x0
0056FFE3  68 21 01 00 00            PUSH 0x121
0056FFE8  FF 50 08                  CALL dword ptr [EAX + 0x8]
0056FFEB  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0056FFF1  C7 85 4C FF FF FF 0F 00 00 00  MOV dword ptr [EBP + 0xffffff4c],0xf
0056FFFB  C7 85 50 FF FF FF 05 44 00 00  MOV dword ptr [EBP + 0xffffff50],0x4405
00570005  8D 85 40 FF FF FF         LEA EAX,[EBP + 0xffffff40]
0057000B  8B 11                     MOV EDX,dword ptr [ECX]
0057000D  50                        PUSH EAX
0057000E  FF 52 18                  CALL dword ptr [EDX + 0x18]
LAB_00570011:
00570011  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00570016  85 C0                     TEST EAX,EAX
00570018  74 0C                     JZ 0x00570026
0057001A  68 28 2A 80 00            PUSH 0x802a28
0057001F  8B CB                     MOV ECX,EBX
00570021  E8 18 1D E9 FF            CALL 0x00401d3e
LAB_00570026:
00570026  E8 78 3F E9 FF            CALL 0x00403fa3
0057002B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00570031  85 C9                     TEST ECX,ECX
00570033  0F 84 44 0C 00 00         JZ 0x00570c7d
00570039  57                        PUSH EDI
0057003A  E8 6A 52 E9 FF            CALL 0x004052a9
0057003F  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00570045  33 C0                     XOR EAX,EAX
00570047  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057004D  5F                        POP EDI
0057004E  5E                        POP ESI
0057004F  5B                        POP EBX
00570050  8B E5                     MOV ESP,EBP
00570052  5D                        POP EBP
00570053  C2 04 00                  RET 0x4
switchD_0056fad2::caseD_6107:
00570056  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0057005C  6A 02                     PUSH 0x2
0057005E  6A 0A                     PUSH 0xa
00570060  51                        PUSH ECX
00570061  E8 DD 1C E9 FF            CALL 0x00401d43
00570066  A1 28 2A 80 00            MOV EAX,[0x00802a28]
0057006B  83 C4 0C                  ADD ESP,0xc
0057006E  3B C7                     CMP EAX,EDI
00570070  74 0C                     JZ 0x0057007e
00570072  68 28 2A 80 00            PUSH 0x802a28
00570077  8B CB                     MOV ECX,EBX
00570079  E8 C0 1C E9 FF            CALL 0x00401d3e
LAB_0057007e:
0057007E  8B 15 48 73 80 00         MOV EDX,dword ptr [0x00807348]
00570084  8B CB                     MOV ECX,EBX
00570086  81 E2 FF 00 00 00         AND EDX,0xff
0057008C  52                        PUSH EDX
0057008D  E8 E6 14 E9 FF            CALL 0x00401578
00570092  A1 48 73 80 00            MOV EAX,[0x00807348]
00570097  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0057009D  25 FF 00 00 00            AND EAX,0xff
005700A2  81 C1 B2 04 00 00         ADD ECX,0x4b2
005700A8  C1 E0 04                  SHL EAX,0x4
005700AB  05 68 75 80 00            ADD EAX,0x807568
005700B0  8B 10                     MOV EDX,dword ptr [EAX]
005700B2  89 11                     MOV dword ptr [ECX],EDX
005700B4  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005700B7  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
005700BA  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005700BD  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
005700C0  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
005700C3  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
005700C6  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
005700CC  3B CF                     CMP ECX,EDI
005700CE  74 62                     JZ 0x00570132
005700D0  8B 15 48 73 80 00         MOV EDX,dword ptr [0x00807348]
005700D6  81 E2 FF 00 00 00         AND EDX,0xff
005700DC  52                        PUSH EDX
005700DD  E8 9F 1F E9 FF            CALL 0x00402081
005700E2  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005700E8  8D 45 A4                  LEA EAX,[EBP + -0x5c]
005700EB  50                        PUSH EAX
005700EC  57                        PUSH EDI
005700ED  6A 03                     PUSH 0x3
005700EF  51                        PUSH ECX
005700F0  E8 5B 19 14 00            CALL 0x006b1a50
005700F5  A1 88 16 80 00            MOV EAX,[0x00801688]
005700FA  3B C7                     CMP EAX,EDI
005700FC  74 34                     JZ 0x00570132
005700FE  66 8B 90 3F 02 00 00      MOV DX,word ptr [EAX + 0x23f]
00570105  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00570108  66 4A                     DEC DX
0057010A  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0057010D  66 F7 DA                  NEG DX
00570110  1B D2                     SBB EDX,EDX
00570112  80 E2 65                  AND DL,0x65
00570115  81 C2 9B 00 00 00         ADD EDX,0x9b
0057011B  2B C2                     SUB EAX,EDX
0057011D  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00570120  50                        PUSH EAX
00570121  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00570124  51                        PUSH ECX
00570125  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0057012B  52                        PUSH EDX
0057012C  50                        PUSH EAX
0057012D  E8 3B 1A E9 FF            CALL 0x00401b6d
LAB_00570132:
00570132  E8 6C 3E E9 FF            CALL 0x00403fa3
00570137  8B 0D 3C 16 81 00         MOV ECX,dword ptr [0x0081163c]
0057013D  3B CF                     CMP ECX,EDI
0057013F  0F 84 38 0B 00 00         JZ 0x00570c7d
00570145  39 7E 14                  CMP dword ptr [ESI + 0x14],EDI
00570148  0F 85 2F 0B 00 00         JNZ 0x00570c7d
0057014E  E8 32 2F E9 FF            CALL 0x00403085
00570153  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00570159  33 C0                     XOR EAX,EAX
0057015B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00570161  5F                        POP EDI
00570162  5E                        POP ESI
00570163  5B                        POP EBX
00570164  8B E5                     MOV ESP,EBP
00570166  5D                        POP EBP
00570167  C2 04 00                  RET 0x4
LAB_0057016a:
0057016A  3D 00 71 00 00            CMP EAX,0x7100
0057016F  0F 87 F0 06 00 00         JA 0x00570865
00570175  0F 84 12 02 00 00         JZ 0x0057038d
0057017B  2D 22 61 00 00            SUB EAX,0x6122
00570180  0F 84 39 01 00 00         JZ 0x005702bf
00570186  48                        DEC EAX
00570187  74 1E                     JZ 0x005701a7
00570189  48                        DEC EAX
0057018A  0F 84 2F 01 00 00         JZ 0x005702bf
00570190  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00570196  33 C0                     XOR EAX,EAX
00570198  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057019E  5F                        POP EDI
0057019F  5E                        POP ESI
005701A0  5B                        POP EBX
005701A1  8B E5                     MOV ESP,EBP
005701A3  5D                        POP EBP
005701A4  C2 04 00                  RET 0x4
switchD_0056fad2::caseD_6102:
005701A7  57                        PUSH EDI
005701A8  8B CB                     MOV ECX,EBX
005701AA  89 3D 4C 67 80 00         MOV dword ptr [0x0080674c],EDI
005701B0  E8 C3 13 E9 FF            CALL 0x00401578
005701B5  39 BB C3 0F 00 00         CMP dword ptr [EBX + 0xfc3],EDI
005701BB  74 14                     JZ 0x005701d1
005701BD  E8 5E 1C 15 00            CALL 0x006c1e20
005701C2  B9 60 00 00 00            MOV ECX,0x60
005701C7  33 C0                     XOR EAX,EAX
005701C9  8D BB 43 0E 00 00         LEA EDI,[EBX + 0xe43]
005701CF  F3 AB                     STOSD.REP ES:EDI
LAB_005701d1:
005701D1  8B CB                     MOV ECX,EBX
005701D3  E8 AE 3C E9 FF            CALL 0x00403e86
005701D8  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005701DE  C6 81 93 04 00 00 00      MOV byte ptr [ECX + 0x493],0x0
005701E5  E8 6E 2E E9 FF            CALL 0x00403058
005701EA  68 3C 16 81 00            PUSH 0x81163c
005701EF  8B CB                     MOV ECX,EBX
005701F1  E8 48 1B E9 FF            CALL 0x00401d3e
005701F6  8B CB                     MOV ECX,EBX
005701F8  E8 65 33 E9 FF            CALL 0x00403562
005701FD  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00570202  85 C0                     TEST EAX,EAX
00570204  75 34                     JNZ 0x0057023a
00570206  68 B6 06 00 00            PUSH 0x6b6
0057020B  E8 20 E3 1B 00            CALL 0x0072e530
00570210  83 C4 04                  ADD ESP,0x4
00570213  85 C0                     TEST EAX,EAX
00570215  74 08                     JZ 0x0057021f
00570217  53                        PUSH EBX
00570218  8B C8                     MOV ECX,EAX
0057021A  E8 B7 5A E9 FF            CALL 0x00405cd6
LAB_0057021f:
0057021F  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00570225  8B 11                     MOV EDX,dword ptr [ECX]
00570227  FF 12                     CALL dword ptr [EDX]
00570229  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0057022E  6A 00                     PUSH 0x0
00570230  50                        PUSH EAX
00570231  8B CB                     MOV ECX,EBX
00570233  E8 18 44 17 00            CALL 0x006e4650
00570238  EB 0A                     JMP 0x00570244
LAB_0057023a:
0057023A  6A 00                     PUSH 0x0
0057023C  50                        PUSH EAX
0057023D  8B CB                     MOV ECX,EBX
0057023F  E8 9C 45 17 00            CALL 0x006e47e0
LAB_00570244:
00570244  B9 08 00 00 00            MOV ECX,0x8
00570249  33 C0                     XOR EAX,EAX
0057024B  8D 7D C0                  LEA EDI,[EBP + -0x40]
0057024E  F3 AB                     STOSD.REP ES:EDI
00570250  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00570253  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00570256  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00570259  2D 03 61 00 00            SUB EAX,0x6103
0057025E  C7 45 C8 00 02 00 00      MOV dword ptr [EBP + -0x38],0x200
00570265  74 30                     JZ 0x00570297
00570267  48                        DEC EAX
00570268  74 27                     JZ 0x00570291
0057026A  83 E8 06                  SUB EAX,0x6
0057026D  74 28                     JZ 0x00570297
0057026F  8D 45 C0                  LEA EAX,[EBP + -0x40]
00570272  8B CB                     MOV ECX,EBX
00570274  50                        PUSH EAX
00570275  E8 36 3B 17 00            CALL 0x006e3db0
0057027A  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00570280  33 C0                     XOR EAX,EAX
00570282  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00570288  5F                        POP EDI
00570289  5E                        POP ESI
0057028A  5B                        POP EBX
0057028B  8B E5                     MOV ESP,EBP
0057028D  5D                        POP EBP
0057028E  C2 04 00                  RET 0x4
LAB_00570291:
00570291  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00570294  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_00570297:
00570297  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0057029A  8D 45 C0                  LEA EAX,[EBP + -0x40]
0057029D  50                        PUSH EAX
0057029E  8B CB                     MOV ECX,EBX
005702A0  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
005702A3  E8 08 3B 17 00            CALL 0x006e3db0
005702A8  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
005702AE  33 C0                     XOR EAX,EAX
005702B0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005702B6  5F                        POP EDI
005702B7  5E                        POP ESI
005702B8  5B                        POP EBX
005702B9  8B E5                     MOV ESP,EBP
005702BB  5D                        POP EBP
005702BC  C2 04 00                  RET 0x4
switchD_0056fad2::caseD_6105:
005702BF  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005702C5  89 3D 4C 67 80 00         MOV dword ptr [0x0080674c],EDI
005702CB  C6 81 93 04 00 00 00      MOV byte ptr [ECX + 0x493],0x0
005702D2  E8 81 2D E9 FF            CALL 0x00403058
005702D7  57                        PUSH EDI
005702D8  8B CB                     MOV ECX,EBX
005702DA  E8 99 12 E9 FF            CALL 0x00401578
005702DF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005702E4  3B C7                     CMP EAX,EDI
005702E6  75 33                     JNZ 0x0057031b
005702E8  68 B6 06 00 00            PUSH 0x6b6
005702ED  E8 3E E2 1B 00            CALL 0x0072e530
005702F2  83 C4 04                  ADD ESP,0x4
005702F5  3B C7                     CMP EAX,EDI
005702F7  74 08                     JZ 0x00570301
005702F9  53                        PUSH EBX
005702FA  8B C8                     MOV ECX,EAX
005702FC  E8 D5 59 E9 FF            CALL 0x00405cd6
LAB_00570301:
00570301  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
00570307  8B 11                     MOV EDX,dword ptr [ECX]
00570309  FF 12                     CALL dword ptr [EDX]
0057030B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
00570310  57                        PUSH EDI
00570311  50                        PUSH EAX
00570312  8B CB                     MOV ECX,EBX
00570314  E8 37 43 17 00            CALL 0x006e4650
00570319  EB 09                     JMP 0x00570324
LAB_0057031b:
0057031B  57                        PUSH EDI
0057031C  50                        PUSH EAX
0057031D  8B CB                     MOV ECX,EBX
0057031F  E8 BC 44 17 00            CALL 0x006e47e0
LAB_00570324:
00570324  81 7E 10 22 61 00 00      CMP dword ptr [ESI + 0x10],0x6122
0057032B  74 16                     JZ 0x00570343
0057032D  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00570330  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
00570336  83 F9 02                  CMP ECX,0x2
00570339  0F 94 C1                  SETZ CL
0057033C  41                        INC ECX
0057033D  88 8A EB 02 00 00         MOV byte ptr [EDX + 0x2eb],CL
LAB_00570343:
00570343  B9 08 00 00 00            MOV ECX,0x8
00570348  33 C0                     XOR EAX,EAX
0057034A  8D 7D C0                  LEA EDI,[EBP + -0x40]
0057034D  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00570350  F3 AB                     STOSD.REP ES:EDI
00570352  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00570355  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00570358  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0057035B  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0057035E  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00570361  8D 45 C0                  LEA EAX,[EBP + -0x40]
00570364  50                        PUSH EAX
00570365  8B CB                     MOV ECX,EBX
00570367  C7 45 C8 00 02 00 00      MOV dword ptr [EBP + -0x38],0x200
0057036E  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00570371  E8 3A 3A 17 00            CALL 0x006e3db0
00570376  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0057037C  33 C0                     XOR EAX,EAX
0057037E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00570384  5F                        POP EDI
00570385  5E                        POP ESI
00570386  5B                        POP EBX
00570387  8B E5                     MOV ESP,EBP
00570389  5D                        POP EBP
0057038A  C2 04 00                  RET 0x4
LAB_0057038d:
0057038D  8B 0D A0 75 80 00         MOV ECX,dword ptr [0x008075a0]
00570393  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0057039A  51                        PUSH ECX
0057039B  E8 70 3D 15 00            CALL 0x006c4110
005703A0  A1 A0 75 80 00            MOV EAX,[0x008075a0]
005703A5  F7 40 04 00 00 00 40      TEST dword ptr [EAX + 0x4],0x40000000
005703AC  74 06                     JZ 0x005703b4
005703AE  50                        PUSH EAX
005703AF  E8 4C 3B 15 00            CALL 0x006c3f00
LAB_005703b4:
005703B4  68 08 34 80 00            PUSH 0x803408
005703B9  E8 42 26 15 00            CALL 0x006c2a00
005703BE  3B C7                     CMP EAX,EDI
005703C0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005703C3  74 2D                     JZ 0x005703f2
005703C5  39 3D A4 75 80 00         CMP dword ptr [0x008075a4],EDI
005703CB  75 25                     JNZ 0x005703f2
005703CD  8D 93 3A 11 00 00         LEA EDX,[EBX + 0x113a]
005703D3  8B CB                     MOV ECX,EBX
005703D5  52                        PUSH EDX
005703D6  E8 D5 39 17 00            CALL 0x006e3db0
005703DB  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
005703E1  33 C0                     XOR EAX,EAX
005703E3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005703E9  5F                        POP EDI
005703EA  5E                        POP ESI
005703EB  5B                        POP EBX
005703EC  8B E5                     MOV ESP,EBP
005703EE  5D                        POP EBP
005703EF  C2 04 00                  RET 0x4
LAB_005703f2:
005703F2  39 BB C3 0F 00 00         CMP dword ptr [EBX + 0xfc3],EDI
005703F8  74 14                     JZ 0x0057040e
005703FA  E8 21 1A 15 00            CALL 0x006c1e20
005703FF  B9 60 00 00 00            MOV ECX,0x60
00570404  33 C0                     XOR EAX,EAX
00570406  8D BB 43 0E 00 00         LEA EDI,[EBX + 0xe43]
0057040C  F3 AB                     STOSD.REP ES:EDI
LAB_0057040e:
0057040E  8B CB                     MOV ECX,EBX
00570410  E8 71 3A E9 FF            CALL 0x00403e86
00570415  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0057041B  C6 81 93 04 00 00 00      MOV byte ptr [ECX + 0x493],0x0
00570422  E8 31 2C E9 FF            CALL 0x00403058
00570427  A1 6C 17 81 00            MOV EAX,[0x0081176c]
0057042C  85 C0                     TEST EAX,EAX
0057042E  74 08                     JZ 0x00570438
00570430  50                        PUSH EAX
00570431  8B CB                     MOV ECX,EBX
00570433  E8 48 47 17 00            CALL 0x006e4b80
LAB_00570438:
00570438  68 3C 16 81 00            PUSH 0x81163c
0057043D  8B CB                     MOV ECX,EBX
0057043F  E8 FA 18 E9 FF            CALL 0x00401d3e
00570444  A1 30 2A 80 00            MOV EAX,[0x00802a30]
00570449  8B 88 A9 00 00 00         MOV ECX,dword ptr [EAX + 0xa9]
0057044F  85 C9                     TEST ECX,ECX
00570451  74 14                     JZ 0x00570467
00570453  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00570456  83 F9 FF                  CMP ECX,-0x1
00570459  74 18                     JZ 0x00570473
0057045B  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
0057045E  51                        PUSH ECX
0057045F  50                        PUSH EAX
00570460  E8 8B 36 14 00            CALL 0x006b3af0
00570465  EB 0C                     JMP 0x00570473
LAB_00570467:
00570467  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
0057046D  51                        PUSH ECX
0057046E  E8 9D 86 14 00            CALL 0x006b8b10
LAB_00570473:
00570473  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
00570479  A1 30 67 80 00            MOV EAX,[0x00806730]
0057047E  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00570484  52                        PUSH EDX
00570485  50                        PUSH EAX
00570486  6A 00                     PUSH 0x0
00570488  6A 00                     PUSH 0x0
0057048A  51                        PUSH ECX
0057048B  E8 F0 5A 14 00            CALL 0x006b5f80
00570490  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
00570496  6A 00                     PUSH 0x0
00570498  52                        PUSH EDX
00570499  E8 C2 A6 14 00            CALL 0x006bab60
0057049E  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005704A3  6A 00                     PUSH 0x0
005704A5  6A 00                     PUSH 0x0
005704A7  50                        PUSH EAX
005704A8  E8 C3 AE 14 00            CALL 0x006bb370
005704AD  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005704B3  8D 85 BC FE FF FF         LEA EAX,[EBP + 0xfffffebc]
005704B9  8D 95 B8 FE FF FF         LEA EDX,[EBP + 0xfffffeb8]
005704BF  6A 00                     PUSH 0x0
005704C1  50                        PUSH EAX
005704C2  89 8D B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],ECX
005704C8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005704CE  E8 1D D3 1B 00            CALL 0x0072d7f0
005704D3  83 C4 08                  ADD ESP,0x8
005704D6  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005704D9  85 C0                     TEST EAX,EAX
005704DB  0F 85 D3 02 00 00         JNZ 0x005707b4
005704E1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005704E7  33 FF                     XOR EDI,EDI
005704E9  51                        PUSH ECX
005704EA  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
005704ED  E8 EE 0E 14 00            CALL 0x006b13e0
005704F2  8B 0D 0C 35 80 00         MOV ECX,dword ptr [0x0080350c]
005704F8  8B C1                     MOV EAX,ECX
005704FA  25 FF 00 00 00            AND EAX,0xff
005704FF  48                        DEC EAX
00570500  74 10                     JZ 0x00570512
00570502  C7 45 E0 20 03 00 00      MOV dword ptr [EBP + -0x20],0x320
00570509  C7 45 E4 58 02 00 00      MOV dword ptr [EBP + -0x1c],0x258
00570510  EB 0E                     JMP 0x00570520
LAB_00570512:
00570512  C7 45 E0 80 02 00 00      MOV dword ptr [EBP + -0x20],0x280
00570519  C7 45 E4 E0 01 00 00      MOV dword ptr [EBP + -0x1c],0x1e0
LAB_00570520:
00570520  33 C0                     XOR EAX,EAX
00570522  BB 10 00 00 00            MOV EBX,0x10
00570527  8A C5                     MOV AL,CH
00570529  83 E8 02                  SUB EAX,0x2
0057052C  75 05                     JNZ 0x00570533
0057052E  BB 18 00 00 00            MOV EBX,0x18
LAB_00570533:
00570533  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
LAB_00570536:
00570536  83 FB 08                  CMP EBX,0x8
00570539  0F 84 06 01 00 00         JZ 0x00570645
0057053F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00570542  33 C9                     XOR ECX,ECX
00570544  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0057054B  8B 82 5A 11 00 00         MOV EAX,dword ptr [EDX + 0x115a]
00570551  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00570554  85 D2                     TEST EDX,EDX
00570556  7E 28                     JLE 0x00570580
00570558  83 C0 0C                  ADD EAX,0xc
LAB_0057055b:
0057055B  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0057055E  39 70 FC                  CMP dword ptr [EAX + -0x4],ESI
00570561  75 0C                     JNZ 0x0057056f
00570563  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00570566  39 30                     CMP dword ptr [EAX],ESI
00570568  75 05                     JNZ 0x0057056f
0057056A  39 58 04                  CMP dword ptr [EAX + 0x4],EBX
0057056D  74 0A                     JZ 0x00570579
LAB_0057056f:
0057056F  41                        INC ECX
00570570  83 C0 0C                  ADD EAX,0xc
00570573  3B CA                     CMP ECX,EDX
00570575  7C E4                     JL 0x0057055b
00570577  EB 07                     JMP 0x00570580
LAB_00570579:
00570579  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00570580:
00570580  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00570583  85 C0                     TEST EAX,EAX
00570585  0F 84 88 00 00 00         JZ 0x00570613
0057058B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00570590  8D 95 00 FF FF FF         LEA EDX,[EBP + 0xffffff00]
00570596  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
0057059C  6A 00                     PUSH 0x0
0057059E  52                        PUSH EDX
0057059F  89 1D 38 67 80 00         MOV dword ptr [0x00806738],EBX
005705A5  89 85 FC FE FF FF         MOV dword ptr [EBP + 0xfffffefc],EAX
005705AB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005705B1  E8 3A D2 1B 00            CALL 0x0072d7f0
005705B6  83 C4 08                  ADD ESP,0x8
005705B9  85 C0                     TEST EAX,EAX
005705BB  75 39                     JNZ 0x005705f6
005705BD  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005705C0  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005705C3  50                        PUSH EAX
005705C4  50                        PUSH EAX
005705C5  50                        PUSH EAX
005705C6  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005705C9  50                        PUSH EAX
005705CA  51                        PUSH ECX
005705CB  53                        PUSH EBX
005705CC  50                        PUSH EAX
005705CD  A1 9C 75 80 00            MOV EAX,[0x0080759c]
005705D2  51                        PUSH ECX
005705D3  68 01 00 00 10            PUSH 0x10000001
005705D8  50                        PUSH EAX
005705D9  E8 62 95 14 00            CALL 0x006b9b40
005705DE  8B 8D FC FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffefc]
005705E4  8B F8                     MOV EDI,EAX
005705E6  F7 DF                     NEG EDI
005705E8  1B FF                     SBB EDI,EDI
005705EA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005705F0  47                        INC EDI
005705F1  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
005705F4  EB 12                     JMP 0x00570608
LAB_005705f6:
005705F6  8B 95 FC FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffefc]
005705FC  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
005705FF  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00570602  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00570608:
00570608  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0057060B  85 C0                     TEST EAX,EAX
0057060D  74 04                     JZ 0x00570613
0057060F  85 FF                     TEST EDI,EDI
00570611  75 2D                     JNZ 0x00570640
LAB_00570613:
00570613  83 FB 10                  CMP EBX,0x10
00570616  74 18                     JZ 0x00570630
00570618  83 FB 18                  CMP EBX,0x18
0057061B  74 0C                     JZ 0x00570629
0057061D  83 FB 20                  CMP EBX,0x20
00570620  75 16                     JNZ 0x00570638
00570622  BB 10 00 00 00            MOV EBX,0x10
00570627  EB 0C                     JMP 0x00570635
LAB_00570629:
00570629  BB 20 00 00 00            MOV EBX,0x20
0057062E  EB 05                     JMP 0x00570635
LAB_00570630:
00570630  BB 08 00 00 00            MOV EBX,0x8
LAB_00570635:
00570635  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
LAB_00570638:
00570638  85 FF                     TEST EDI,EDI
0057063A  0F 84 F6 FE FF FF         JZ 0x00570536
LAB_00570640:
00570640  83 FB 08                  CMP EBX,0x8
00570643  75 1B                     JNZ 0x00570660
LAB_00570645:
00570645  85 FF                     TEST EDI,EDI
00570647  75 17                     JNZ 0x00570660
00570649  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0057064E  68 92 07 00 00            PUSH 0x792
00570653  68 C8 A0 7C 00            PUSH 0x7ca0c8
00570658  50                        PUSH EAX
00570659  6A FF                     PUSH -0x1
0057065B  E8 E0 57 13 00            CALL 0x006a5e40
LAB_00570660:
00570660  33 C0                     XOR EAX,EAX
00570662  A0 0E 35 80 00            MOV AL,[0x0080350e]
00570667  48                        DEC EAX
00570668  74 0C                     JZ 0x00570676
0057066A  48                        DEC EAX
0057066B  75 11                     JNZ 0x0057067e
0057066D  80 3D 1F 35 80 00 01      CMP byte ptr [0x0080351f],0x1
00570674  75 08                     JNZ 0x0057067e
LAB_00570676:
00570676  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00570679  0C 04                     OR AL,0x4
0057067B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0057067e:
0057067E  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00570681  85 F6                     TEST ESI,ESI
00570683  74 17                     JZ 0x0057069c
00570685  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00570688  8B 15 A4 75 80 00         MOV EDX,dword ptr [0x008075a4]
0057068E  51                        PUSH ECX
0057068F  68 08 34 80 00            PUSH 0x803408
00570694  52                        PUSH EDX
00570695  E8 46 24 15 00            CALL 0x006c2ae0
0057069A  EB 15                     JMP 0x005706b1
LAB_0057069c:
0057069C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057069F  8B 0D A0 75 80 00         MOV ECX,dword ptr [0x008075a0]
005706A5  50                        PUSH EAX
005706A6  68 08 34 80 00            PUSH 0x803408
005706AB  51                        PUSH ECX
005706AC  E8 4F 34 15 00            CALL 0x006c3b00
LAB_005706b1:
005706B1  33 C0                     XOR EAX,EAX
005706B3  A0 0E 35 80 00            MOV AL,[0x0080350e]
005706B8  48                        DEC EAX
005706B9  74 53                     JZ 0x0057070e
005706BB  48                        DEC EAX
005706BC  75 7D                     JNZ 0x0057073b
005706BE  85 F6                     TEST ESI,ESI
005706C0  74 28                     JZ 0x005706ea
005706C2  8B 15 1B 35 80 00         MOV EDX,dword ptr [0x0080351b]
005706C8  A1 17 35 80 00            MOV EAX,[0x00803517]
005706CD  8B 0D 13 35 80 00         MOV ECX,dword ptr [0x00803513]
005706D3  52                        PUSH EDX
005706D4  8B 15 0F 35 80 00         MOV EDX,dword ptr [0x0080350f]
005706DA  50                        PUSH EAX
005706DB  A1 A4 75 80 00            MOV EAX,[0x008075a4]
005706E0  51                        PUSH ECX
005706E1  52                        PUSH EDX
005706E2  50                        PUSH EAX
005706E3  E8 48 26 15 00            CALL 0x006c2d30
005706E8  EB 51                     JMP 0x0057073b
LAB_005706ea:
005706EA  8B 0D 1B 35 80 00         MOV ECX,dword ptr [0x0080351b]
005706F0  8B 15 17 35 80 00         MOV EDX,dword ptr [0x00803517]
005706F6  A1 13 35 80 00            MOV EAX,[0x00803513]
005706FB  51                        PUSH ECX
005706FC  8B 0D 0F 35 80 00         MOV ECX,dword ptr [0x0080350f]
00570702  52                        PUSH EDX
00570703  8B 15 A0 75 80 00         MOV EDX,dword ptr [0x008075a0]
00570709  50                        PUSH EAX
0057070A  51                        PUSH ECX
0057070B  52                        PUSH EDX
0057070C  EB 28                     JMP 0x00570736
LAB_0057070e:
0057070E  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00570713  85 F6                     TEST ESI,ESI
00570715  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00570718  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
0057071B  51                        PUSH ECX
0057071C  52                        PUSH EDX
0057071D  6A 00                     PUSH 0x0
0057071F  6A 00                     PUSH 0x0
00570721  74 0D                     JZ 0x00570730
00570723  A1 A4 75 80 00            MOV EAX,[0x008075a4]
00570728  50                        PUSH EAX
00570729  E8 02 26 15 00            CALL 0x006c2d30
0057072E  EB 0B                     JMP 0x0057073b
LAB_00570730:
00570730  A1 A0 75 80 00            MOV EAX,[0x008075a0]
00570735  50                        PUSH EAX
LAB_00570736:
00570736  E8 85 38 15 00            CALL 0x006c3fc0
STAppC::GetMessage::cf_common_exit_0057073B:
0057073B  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0057073E  8D 4F 38                  LEA ECX,[EDI + 0x38]
00570741  E8 2D 4A E9 FF            CALL 0x00405173
00570746  85 F6                     TEST ESI,ESI
00570748  C7 87 FA 4E 00 00 01 00 00 00  MOV dword ptr [EDI + 0x4efa],0x1
00570752  74 3D                     JZ 0x00570791
00570754  8B 0D A4 75 80 00         MOV ECX,dword ptr [0x008075a4]
0057075A  51                        PUSH ECX
0057075B  E8 30 26 15 00            CALL 0x006c2d90
00570760  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00570766  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00570769  68 BC 07 00 00            PUSH 0x7bc
0057076E  68 C8 A0 7C 00            PUSH 0x7ca0c8
00570773  52                        PUSH EDX
00570774  50                        PUSH EAX
00570775  E8 C6 56 13 00            CALL 0x006a5e40
0057077A  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00570780  33 C0                     XOR EAX,EAX
00570782  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00570788  5F                        POP EDI
00570789  5E                        POP ESI
0057078A  5B                        POP EBX
0057078B  8B E5                     MOV ESP,EBP
0057078D  5D                        POP EBP
0057078E  C2 04 00                  RET 0x4
LAB_00570791:
00570791  8B 0D A0 75 80 00         MOV ECX,dword ptr [0x008075a0]
00570797  51                        PUSH ECX
00570798  E8 63 38 15 00            CALL 0x006c4000
0057079D  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
005707A3  33 C0                     XOR EAX,EAX
005707A5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005707AB  5F                        POP EDI
005707AC  5E                        POP ESI
005707AD  5B                        POP EBX
005707AE  8B E5                     MOV ESP,EBP
005707B0  5D                        POP EBP
005707B1  C2 04 00                  RET 0x4
LAB_005707b4:
005707B4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005707B7  8B 95 B8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeb8]
005707BD  85 C0                     TEST EAX,EAX
005707BF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005707C5  74 0B                     JZ 0x005707d2
005707C7  A1 A4 75 80 00            MOV EAX,[0x008075a4]
005707CC  50                        PUSH EAX
005707CD  E8 AE 24 15 00            CALL 0x006c2c80
LAB_005707d2:
005707D2  A1 38 67 80 00            MOV EAX,[0x00806738]
005707D7  BA 08 00 00 00            MOV EDX,0x8
005707DC  3B C2                     CMP EAX,EDX
005707DE  74 3C                     JZ 0x0057081c
005707E0  A1 34 67 80 00            MOV EAX,[0x00806734]
005707E5  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005707EB  68 00 01 00 00            PUSH 0x100
005707F0  6A 00                     PUSH 0x0
005707F2  6A 00                     PUSH 0x0
005707F4  50                        PUSH EAX
005707F5  51                        PUSH ECX
005707F6  52                        PUSH EDX
005707F7  50                        PUSH EAX
005707F8  51                        PUSH ECX
005707F9  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005707FF  68 01 00 00 10            PUSH 0x10000001
00570804  51                        PUSH ECX
00570805  89 15 38 67 80 00         MOV dword ptr [0x00806738],EDX
0057080B  E8 30 93 14 00            CALL 0x006b9b40
00570810  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00570816  52                        PUSH EDX
00570817  E8 54 0C 14 00            CALL 0x006b1470
LAB_0057081c:
0057081C  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0057081F  8D 7E 38                  LEA EDI,[ESI + 0x38]
00570822  C7 86 FA 4E 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4efa],0x0
0057082C  8B CF                     MOV ECX,EDI
0057082E  E8 40 49 E9 FF            CALL 0x00405173
00570833  A1 78 6D 85 00            MOV EAX,[0x00856d78]
00570838  8B CF                     MOV ECX,EDI
0057083A  50                        PUSH EAX
0057083B  E8 14 27 E9 FF            CALL 0x00402f54
00570840  8D 8E 3A 11 00 00         LEA ECX,[ESI + 0x113a]
00570846  51                        PUSH ECX
00570847  8B CE                     MOV ECX,ESI
00570849  E8 62 35 17 00            CALL 0x006e3db0
0057084E  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00570854  33 C0                     XOR EAX,EAX
00570856  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057085C  5F                        POP EDI
0057085D  5E                        POP ESI
0057085E  5B                        POP EBX
0057085F  8B E5                     MOV ESP,EBP
00570861  5D                        POP EBP
00570862  C2 04 00                  RET 0x4
LAB_00570865:
00570865  2D 01 71 00 00            SUB EAX,0x7101
0057086A  74 5B                     JZ 0x005708c7
0057086C  48                        DEC EAX
0057086D  74 27                     JZ 0x00570896
0057086F  83 E8 02                  SUB EAX,0x2
00570872  0F 85 05 04 00 00         JNZ 0x00570c7d
00570878  8B CB                     MOV ECX,EBX
0057087A  E8 AB 32 E9 FF            CALL 0x00403b2a
0057087F  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00570885  33 C0                     XOR EAX,EAX
00570887  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057088D  5F                        POP EDI
0057088E  5E                        POP ESI
0057088F  5B                        POP EBX
00570890  8B E5                     MOV ESP,EBP
00570892  5D                        POP EBP
00570893  C2 04 00                  RET 0x4
LAB_00570896:
00570896  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
0057089C  6A 02                     PUSH 0x2
0057089E  6A 0A                     PUSH 0xa
005708A0  52                        PUSH EDX
005708A1  E8 9D 14 E9 FF            CALL 0x00401d43
005708A6  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
005708AC  83 C4 0C                  ADD ESP,0xc
005708AF  C7 43 1C 01 00 00 00      MOV dword ptr [EBX + 0x1c],0x1
005708B6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005708BC  33 C0                     XOR EAX,EAX
005708BE  5F                        POP EDI
005708BF  5E                        POP ESI
005708C0  5B                        POP EBX
005708C1  8B E5                     MOV ESP,EBP
005708C3  5D                        POP EBP
005708C4  C2 04 00                  RET 0x4
LAB_005708c7:
005708C7  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
005708CA  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
005708D1  48                        DEC EAX
005708D2  0F 84 A8 02 00 00         JZ 0x00570b80
005708D8  83 E8 02                  SUB EAX,0x2
005708DB  74 56                     JZ 0x00570933
005708DD  48                        DEC EAX
005708DE  74 08                     JZ 0x005708e8
005708E0  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005708E3  E9 47 03 00 00            JMP 0x00570c2f
LAB_005708e8:
005708E8  B9 08 00 00 00            MOV ECX,0x8
005708ED  33 C0                     XOR EAX,EAX
005708EF  8D BB 3A 11 00 00         LEA EDI,[EBX + 0x113a]
005708F5  8D B3 03 6D 00 00         LEA ESI,[EBX + 0x6d03]
005708FB  F3 AB                     STOSD.REP ES:EDI
005708FD  B9 08 00 00 00            MOV ECX,0x8
00570902  8D 7D C0                  LEA EDI,[EBP + -0x40]
00570905  F3 AB                     STOSD.REP ES:EDI
00570907  B9 46 00 00 00            MOV ECX,0x46
0057090C  BF 08 34 80 00            MOV EDI,0x803408
00570911  C7 83 46 11 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1146],0x1
0057091B  C7 83 4A 11 00 00 08 61 00 00  MOV dword ptr [EBX + 0x114a],0x6108
00570925  C7 45 D0 00 71 00 00      MOV dword ptr [EBP + -0x30],0x7100
0057092C  F3 A5                     MOVSD.REP ES:EDI,ESI
0057092E  E9 FC 02 00 00            JMP 0x00570c2f
LAB_00570933:
00570933  B9 46 00 00 00            MOV ECX,0x46
00570938  33 C0                     XOR EAX,EAX
0057093A  BF 08 34 80 00            MOV EDI,0x803408
0057093F  F3 AB                     STOSD.REP ES:EDI
00570941  B9 08 00 00 00            MOV ECX,0x8
00570946  8D BB 3A 11 00 00         LEA EDI,[EBX + 0x113a]
0057094C  F3 AB                     STOSD.REP ES:EDI
0057094E  B9 08 00 00 00            MOV ECX,0x8
00570953  8D 7D C0                  LEA EDI,[EBP + -0x40]
00570956  C7 83 46 11 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1146],0x1
00570960  C7 83 4A 11 00 00 04 61 00 00  MOV dword ptr [EBX + 0x114a],0x6104
0057096A  89 83 4E 11 00 00         MOV dword ptr [EBX + 0x114e],EAX
00570970  F3 AB                     STOSD.REP ES:EDI
00570972  A0 30 73 80 00            MOV AL,[0x00807330]
00570977  C7 45 D0 00 71 00 00      MOV dword ptr [EBP + -0x30],0x7100
0057097E  A8 02                     TEST AL,0x2
00570980  0F 84 A9 02 00 00         JZ 0x00570c2f
00570986  B9 C6 00 00 00            MOV ECX,0xc6
0057098B  33 C0                     XOR EAX,EAX
0057098D  8D BD 60 F6 FF FF         LEA EDI,[EBP + 0xfffff660]
00570993  8D 95 B8 FD FF FF         LEA EDX,[EBP + 0xfffffdb8]
00570999  F3 AB                     STOSD.REP ES:EDI
0057099B  8D 85 B8 FA FF FF         LEA EAX,[EBP + 0xfffffab8]
005709A1  8D 8D B8 FB FF FF         LEA ECX,[EBP + 0xfffffbb8]
005709A7  50                        PUSH EAX
005709A8  51                        PUSH ECX
005709A9  8D 45 F0                  LEA EAX,[EBP + -0x10]
005709AC  52                        PUSH EDX
005709AD  8D 8B 0A 7C 00 00         LEA ECX,[EBX + 0x7c0a]
005709B3  50                        PUSH EAX
005709B4  51                        PUSH ECX
005709B5  E8 76 DD 1B 00            CALL 0x0072e730
005709BA  8B 15 3C B0 79 00         MOV EDX,dword ptr [0x0079b03c]
005709C0  6A 00                     PUSH 0x0
005709C2  8D 85 B8 FD FF FF         LEA EAX,[EBP + 0xfffffdb8]
005709C8  52                        PUSH EDX
005709C9  8D 4D F0                  LEA ECX,[EBP + -0x10]
005709CC  8D BB 1A 7D 00 00         LEA EDI,[EBX + 0x7d1a]
005709D2  50                        PUSH EAX
005709D3  51                        PUSH ECX
005709D4  57                        PUSH EDI
005709D5  E8 36 E7 1B 00            CALL 0x0072f110
005709DA  6A 00                     PUSH 0x0
005709DC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005709DF  6A 00                     PUSH 0x0
005709E1  8D 85 60 F6 FF FF         LEA EAX,[EBP + 0xfffff660]
005709E7  52                        PUSH EDX
005709E8  50                        PUSH EAX
005709E9  57                        PUSH EDI
005709EA  E8 14 3A E9 FF            CALL 0x00404403
005709EF  8B C8                     MOV ECX,EAX
005709F1  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005709F4  83 C4 3C                  ADD ESP,0x3c
005709F7  83 F8 40                  CMP EAX,0x40
005709FA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005709FD  0F 85 2C 02 00 00         JNZ 0x00570c2f
00570A03  85 C9                     TEST ECX,ECX
00570A05  0F 84 24 02 00 00         JZ 0x00570c2f
00570A0B  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00570A0E  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00570A11  85 C0                     TEST EAX,EAX
00570A13  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00570A16  0F 84 12 01 00 00         JZ 0x00570b2e
00570A1C  3B D0                     CMP EDX,EAX
00570A1E  73 14                     JNC 0x00570a34
00570A20  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00570A23  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
00570A26  0F AF C2                  IMUL EAX,EDX
00570A29  03 C6                     ADD EAX,ESI
00570A2B  42                        INC EDX
00570A2C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00570A2F  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00570A32  EB 05                     JMP 0x00570a39
LAB_00570a34:
00570A34  33 C0                     XOR EAX,EAX
00570A36  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00570a39:
00570A39  85 C0                     TEST EAX,EAX
00570A3B  0F 84 34 01 00 00         JZ 0x00570b75
LAB_00570a41:
00570A41  8D 8D B8 FC FF FF         LEA ECX,[EBP + 0xfffffcb8]
00570A47  6A 00                     PUSH 0x0
00570A49  51                        PUSH ECX
00570A4A  6A 00                     PUSH 0x0
00570A4C  6A 00                     PUSH 0x0
00570A4E  50                        PUSH EAX
00570A4F  E8 DC DC 1B 00            CALL 0x0072e730
00570A54  83 C4 14                  ADD ESP,0x14
00570A57  8D 95 B8 FC FF FF         LEA EDX,[EBP + 0xfffffcb8]
00570A5D  8D 85 B8 FC FF FF         LEA EAX,[EBP + 0xfffffcb8]
00570A63  52                        PUSH EDX
00570A64  50                        PUSH EAX
00570A65  E8 76 6D 14 00            CALL 0x006b77e0
00570A6A  8D 8D B8 FB FF FF         LEA ECX,[EBP + 0xfffffbb8]
00570A70  8D 95 B8 FB FF FF         LEA EDX,[EBP + 0xfffffbb8]
00570A76  51                        PUSH ECX
00570A77  52                        PUSH EDX
00570A78  E8 63 6D 14 00            CALL 0x006b77e0
00570A7D  8D B5 B8 FB FF FF         LEA ESI,[EBP + 0xfffffbb8]
00570A83  8D BD B8 FC FF FF         LEA EDI,[EBP + 0xfffffcb8]
LAB_00570a89:
00570A89  8A 0F                     MOV CL,byte ptr [EDI]
00570A8B  8A 16                     MOV DL,byte ptr [ESI]
00570A8D  8A C1                     MOV AL,CL
00570A8F  3A CA                     CMP CL,DL
00570A91  75 1E                     JNZ 0x00570ab1
00570A93  84 C0                     TEST AL,AL
00570A95  74 16                     JZ 0x00570aad
00570A97  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
00570A9A  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
00570A9D  8A C2                     MOV AL,DL
00570A9F  3A D1                     CMP DL,CL
00570AA1  75 0E                     JNZ 0x00570ab1
00570AA3  83 C7 02                  ADD EDI,0x2
00570AA6  83 C6 02                  ADD ESI,0x2
00570AA9  84 C0                     TEST AL,AL
00570AAB  75 DC                     JNZ 0x00570a89
LAB_00570aad:
00570AAD  33 C0                     XOR EAX,EAX
00570AAF  EB 05                     JMP 0x00570ab6
LAB_00570ab1:
00570AB1  1B C0                     SBB EAX,EAX
00570AB3  83 D8 FF                  SBB EAX,-0x1
LAB_00570ab6:
00570AB6  85 C0                     TEST EAX,EAX
00570AB8  75 38                     JNZ 0x00570af2
00570ABA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00570ABD  B9 46 00 00 00            MOV ECX,0x46
00570AC2  8B F0                     MOV ESI,EAX
00570AC4  BF 08 34 80 00            MOV EDI,0x803408
00570AC9  6A 00                     PUSH 0x0
00570ACB  50                        PUSH EAX
00570ACC  F3 A5                     MOVSD.REP ES:EDI,ESI
00570ACE  8D 85 B8 FD FF FF         LEA EAX,[EBP + 0xfffffdb8]
00570AD4  8D 4D F0                  LEA ECX,[EBP + -0x10]
00570AD7  50                        PUSH EAX
00570AD8  51                        PUSH ECX
00570AD9  68 08 34 80 00            PUSH 0x803408
00570ADE  E8 2D E6 1B 00            CALL 0x0072f110
00570AE3  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00570AEA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00570AED  83 C4 14                  ADD ESP,0x14
00570AF0  EB 26                     JMP 0x00570b18
LAB_00570af2:
00570AF2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00570AF5  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00570AF8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00570AFB  3B D0                     CMP EDX,EAX
00570AFD  73 14                     JNC 0x00570b13
00570AFF  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00570B02  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
00570B05  0F AF C2                  IMUL EAX,EDX
00570B08  03 C6                     ADD EAX,ESI
00570B0A  42                        INC EDX
00570B0B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00570B0E  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00570B11  EB 05                     JMP 0x00570b18
LAB_00570b13:
00570B13  33 C0                     XOR EAX,EAX
00570B15  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00570b18:
00570B18  85 C0                     TEST EAX,EAX
00570B1A  0F 85 21 FF FF FF         JNZ 0x00570a41
00570B20  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00570B23  51                        PUSH ECX
00570B24  E8 E7 D5 13 00            CALL 0x006ae110
00570B29  E9 01 01 00 00            JMP 0x00570c2f
LAB_00570b2e:
00570B2E  3B D0                     CMP EDX,EAX
00570B30  73 11                     JNC 0x00570b43
00570B32  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00570B35  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
00570B38  0F AF C2                  IMUL EAX,EDX
00570B3B  03 C6                     ADD EAX,ESI
00570B3D  42                        INC EDX
00570B3E  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00570B41  EB 02                     JMP 0x00570b45
LAB_00570b43:
00570B43  33 C0                     XOR EAX,EAX
LAB_00570b45:
00570B45  85 C0                     TEST EAX,EAX
00570B47  74 2C                     JZ 0x00570b75
00570B49  6A 00                     PUSH 0x0
00570B4B  8B F0                     MOV ESI,EAX
00570B4D  50                        PUSH EAX
00570B4E  8D 95 B8 FD FF FF         LEA EDX,[EBP + 0xfffffdb8]
00570B54  8D 45 F0                  LEA EAX,[EBP + -0x10]
00570B57  B9 46 00 00 00            MOV ECX,0x46
00570B5C  BF 08 34 80 00            MOV EDI,0x803408
00570B61  52                        PUSH EDX
00570B62  50                        PUSH EAX
00570B63  68 08 34 80 00            PUSH 0x803408
00570B68  F3 A5                     MOVSD.REP ES:EDI,ESI
00570B6A  E8 A1 E5 1B 00            CALL 0x0072f110
00570B6F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00570B72  83 C4 14                  ADD ESP,0x14
LAB_00570b75:
00570B75  51                        PUSH ECX
00570B76  E8 95 D5 13 00            CALL 0x006ae110
00570B7B  E9 AF 00 00 00            JMP 0x00570c2f
LAB_00570b80:
00570B80  B9 08 00 00 00            MOV ECX,0x8
00570B85  33 C0                     XOR EAX,EAX
00570B87  8D BB 3A 11 00 00         LEA EDI,[EBX + 0x113a]
00570B8D  F3 AB                     STOSD.REP ES:EDI
00570B8F  B9 46 00 00 00            MOV ECX,0x46
00570B94  BF 08 34 80 00            MOV EDI,0x803408
00570B99  F3 AB                     STOSD.REP ES:EDI
00570B9B  8B 0D 40 67 80 00         MOV ECX,dword ptr [0x00806740]
00570BA1  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00570BA4  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00570BA7  3B D0                     CMP EDX,EAX
00570BA9  73 11                     JNC 0x00570bbc
00570BAB  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00570BAE  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
00570BB1  0F AF C2                  IMUL EAX,EDX
00570BB4  03 C6                     ADD EAX,ESI
00570BB6  42                        INC EDX
00570BB7  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00570BBA  EB 02                     JMP 0x00570bbe
LAB_00570bbc:
00570BBC  33 C0                     XOR EAX,EAX
LAB_00570bbe:
00570BBE  85 C0                     TEST EAX,EAX
00570BC0  74 46                     JZ 0x00570c08
00570BC2  B9 01 00 00 00            MOV ECX,0x1
00570BC7  8B F0                     MOV ESI,EAX
00570BC9  89 8B 46 11 00 00         MOV dword ptr [EBX + 0x1146],ECX
00570BCF  89 8B 4E 11 00 00         MOV dword ptr [EBX + 0x114e],ECX
00570BD5  B9 46 00 00 00            MOV ECX,0x46
00570BDA  BF 08 34 80 00            MOV EDI,0x803408
00570BDF  C7 83 4A 11 00 00 01 71 00 00  MOV dword ptr [EBX + 0x114a],0x7101
00570BE9  50                        PUSH EAX
00570BEA  F3 A5                     MOVSD.REP ES:EDI,ESI
00570BEC  8D 8B 64 01 00 00         LEA ECX,[EBX + 0x164]
00570BF2  51                        PUSH ECX
00570BF3  68 E4 6E 7C 00            PUSH 0x7c6ee4
00570BF8  68 08 34 80 00            PUSH 0x803408
00570BFD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00570C03  83 C4 10                  ADD ESP,0x10
00570C06  EB 14                     JMP 0x00570c1c
LAB_00570c08:
00570C08  C7 83 46 11 00 00 01 00 00 00  MOV dword ptr [EBX + 0x1146],0x1
00570C12  C7 83 4A 11 00 00 23 61 00 00  MOV dword ptr [EBX + 0x114a],0x6123
LAB_00570c1c:
00570C1C  B9 08 00 00 00            MOV ECX,0x8
00570C21  33 C0                     XOR EAX,EAX
00570C23  8D 7D C0                  LEA EDI,[EBP + -0x40]
00570C26  F3 AB                     STOSD.REP ES:EDI
00570C28  C7 45 D0 00 71 00 00      MOV dword ptr [EBP + -0x30],0x7100
LAB_00570c2f:
00570C2F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00570C32  85 C0                     TEST EAX,EAX
00570C34  74 47                     JZ 0x00570c7d
00570C36  8D 95 78 F9 FF FF         LEA EDX,[EBP + 0xfffff978]
00570C3C  52                        PUSH EDX
00570C3D  68 08 34 80 00            PUSH 0x803408
00570C42  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
00570C48  83 F8 FF                  CMP EAX,-0x1
00570C4B  74 22                     JZ 0x00570c6f
00570C4D  8B 03                     MOV EAX,dword ptr [EBX]
00570C4F  8D 4D C0                  LEA ECX,[EBP + -0x40]
00570C52  51                        PUSH ECX
00570C53  8B CB                     MOV ECX,EBX
00570C55  FF 50 18                  CALL dword ptr [EAX + 0x18]
00570C58  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00570C5E  33 C0                     XOR EAX,EAX
00570C60  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00570C66  5F                        POP EDI
00570C67  5E                        POP ESI
00570C68  5B                        POP EBX
00570C69  8B E5                     MOV ESP,EBP
00570C6B  5D                        POP EBP
00570C6C  C2 04 00                  RET 0x4
LAB_00570c6f:
00570C6F  8B 13                     MOV EDX,dword ptr [EBX]
00570C71  8D 83 3A 11 00 00         LEA EAX,[EBX + 0x113a]
LAB_00570c77:
00570C77  50                        PUSH EAX
00570C78  8B CB                     MOV ECX,EBX
00570C7A  FF 52 18                  CALL dword ptr [EDX + 0x18]
switchD_0056fad2::caseD_6101:
00570C7D  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
00570C83  33 C0                     XOR EAX,EAX
00570C85  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00570C8B  5F                        POP EDI
00570C8C  5E                        POP ESI
00570C8D  5B                        POP EBX
00570C8E  8B E5                     MOV ESP,EBP
00570C90  5D                        POP EBP
00570C91  C2 04 00                  RET 0x4
LAB_00570c94:
00570C94  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
00570C9A  68 28 A2 7C 00            PUSH 0x7ca228
00570C9F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00570CA4  56                        PUSH ESI
00570CA5  57                        PUSH EDI
00570CA6  68 90 08 00 00            PUSH 0x890
00570CAB  68 C8 A0 7C 00            PUSH 0x7ca0c8
00570CB0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00570CB6  E8 15 C8 13 00            CALL 0x006ad4d0
00570CBB  83 C4 18                  ADD ESP,0x18
00570CBE  85 C0                     TEST EAX,EAX
00570CC0  74 01                     JZ 0x00570cc3
00570CC2  CC                        INT3
LAB_00570cc3:
00570CC3  68 91 08 00 00            PUSH 0x891
00570CC8  68 C8 A0 7C 00            PUSH 0x7ca0c8
00570CCD  57                        PUSH EDI
00570CCE  56                        PUSH ESI
00570CCF  E8 6C 51 13 00            CALL 0x006a5e40
00570CD4  5F                        POP EDI
00570CD5  5E                        POP ESI
00570CD6  B8 FF FF 00 00            MOV EAX,0xffff
00570CDB  5B                        POP EBX
00570CDC  8B E5                     MOV ESP,EBP
00570CDE  5D                        POP EBP
00570CDF  C2 04 00                  RET 0x4
