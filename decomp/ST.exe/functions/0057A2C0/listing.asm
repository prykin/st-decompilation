FUN_0057a2c0:
0057A2C0  55                        PUSH EBP
0057A2C1  8B EC                     MOV EBP,ESP
0057A2C3  6A FF                     PUSH -0x1
0057A2C5  68 A8 B3 79 00            PUSH 0x79b3a8
0057A2CA  68 64 D9 72 00            PUSH 0x72d964
0057A2CF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0057A2D5  50                        PUSH EAX
0057A2D6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0057A2DD  81 EC 18 01 00 00         SUB ESP,0x118
0057A2E3  53                        PUSH EBX
0057A2E4  56                        PUSH ESI
0057A2E5  57                        PUSH EDI
0057A2E6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0057A2E9  C7 85 14 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff14],0x0
0057A2F3  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0057A2F6  8D 04 F5 00 00 00 00      LEA EAX,[ESI*0x8 + 0x0]
0057A2FD  50                        PUSH EAX
0057A2FE  E8 6D 09 13 00            CALL 0x006aac70
0057A303  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0057A306  89 07                     MOV dword ptr [EDI],EAX
0057A308  85 C0                     TEST EAX,EAX
0057A30A  0F 84 A3 0C 00 00         JZ 0x0057afb3
0057A310  85 F6                     TEST ESI,ESI
0057A312  0F 84 9B 0C 00 00         JZ 0x0057afb3
0057A318  83 FE 05                  CMP ESI,0x5
0057A31B  74 09                     JZ 0x0057a326
0057A31D  83 FE 07                  CMP ESI,0x7
0057A320  0F 85 8D 0C 00 00         JNZ 0x0057afb3
LAB_0057a326:
0057A326  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0057A329  0F BF 7B 3A               MOVSX EDI,word ptr [EBX + 0x3a]
0057A32D  0F BF 43 34               MOVSX EAX,word ptr [EBX + 0x34]
0057A331  2B F8                     SUB EDI,EAX
0057A333  0F BF 73 3C               MOVSX ESI,word ptr [EBX + 0x3c]
0057A337  0F BF 43 36               MOVSX EAX,word ptr [EBX + 0x36]
0057A33B  2B F0                     SUB ESI,EAX
0057A33D  0F BF 43 3E               MOVSX EAX,word ptr [EBX + 0x3e]
0057A341  0F BF 4B 38               MOVSX ECX,word ptr [EBX + 0x38]
0057A345  2B C1                     SUB EAX,ECX
0057A347  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0057A34A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0057A34D  85 C0                     TEST EAX,EAX
0057A34F  0F 84 AD 08 00 00         JZ 0x0057ac02
0057A355  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0057A358  85 C0                     TEST EAX,EAX
0057A35A  0F 84 A2 08 00 00         JZ 0x0057ac02
0057A360  D9 45 1C                  FLD float ptr [EBP + 0x1c]
0057A363  D8 0D A0 B3 79 00         FMUL float ptr [0x0079b3a0]
0057A369  DA 75 18                  FIDIV dword ptr [EBP + 0x18]
0057A36C  E8 17 3F 1B 00            CALL 0x0072e288
0057A371  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
0057A377  0F BF 43 3E               MOVSX EAX,word ptr [EBX + 0x3e]
0057A37B  50                        PUSH EAX
0057A37C  0F BF 43 3C               MOVSX EAX,word ptr [EBX + 0x3c]
0057A380  50                        PUSH EAX
0057A381  0F BF 43 3A               MOVSX EAX,word ptr [EBX + 0x3a]
0057A385  50                        PUSH EAX
0057A386  0F BF 43 38               MOVSX EAX,word ptr [EBX + 0x38]
0057A38A  50                        PUSH EAX
0057A38B  0F BF 43 36               MOVSX EAX,word ptr [EBX + 0x36]
0057A38F  50                        PUSH EAX
0057A390  0F BF 43 34               MOVSX EAX,word ptr [EBX + 0x34]
0057A394  50                        PUSH EAX
0057A395  E8 73 2B 13 00            CALL 0x006acf0d
0057A39A  83 C4 18                  ADD ESP,0x18
0057A39D  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
0057A3A3  85 C0                     TEST EAX,EAX
0057A3A5  0F 84 35 0C 00 00         JZ 0x0057afe0
0057A3AB  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0057A3AE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3B1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3B4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3B7  C1 E0 04                  SHL EAX,0x4
0057A3BA  99                        CDQ
0057A3BB  F7 BD 28 FF FF FF         IDIV dword ptr [EBP + 0xffffff28]
0057A3C1  8B C8                     MOV ECX,EAX
0057A3C3  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
0057A3C9  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0057A3CC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3CF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3D2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3D5  C1 E0 04                  SHL EAX,0x4
0057A3D8  99                        CDQ
0057A3D9  F7 BD 28 FF FF FF         IDIV dword ptr [EBP + 0xffffff28]
0057A3DF  8B F8                     MOV EDI,EAX
0057A3E1  89 BD 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDI
0057A3E7  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0057A3EA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3ED  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3F0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3F3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A3F6  C1 E0 04                  SHL EAX,0x4
0057A3F9  99                        CDQ
0057A3FA  F7 BD 28 FF FF FF         IDIV dword ptr [EBP + 0xffffff28]
0057A400  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
0057A406  0F BF 73 41               MOVSX ESI,word ptr [EBX + 0x41]
0057A40A  89 B5 EC FE FF FF         MOV dword ptr [EBP + 0xfffffeec],ESI
0057A410  0F BF 53 43               MOVSX EDX,word ptr [EBX + 0x43]
0057A414  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
0057A41A  0F BF 43 45               MOVSX EAX,word ptr [EBX + 0x45]
0057A41E  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0057A421  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0057A424  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0057A427  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
0057A42A  C1 E1 02                  SHL ECX,0x2
0057A42D  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057A432  F7 E9                     IMUL ECX
0057A434  C1 FA 0C                  SAR EDX,0xc
0057A437  8B C2                     MOV EAX,EDX
0057A439  C1 E8 1F                  SHR EAX,0x1f
0057A43C  03 D0                     ADD EDX,EAX
0057A43E  03 D6                     ADD EDX,ESI
0057A440  89 55 9C                  MOV dword ptr [EBP + -0x64],EDX
0057A443  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0057A446  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0057A449  8D 0C CF                  LEA ECX,[EDI + ECX*0x8]
0057A44C  C1 E1 02                  SHL ECX,0x2
0057A44F  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057A454  F7 E9                     IMUL ECX
0057A456  C1 FA 0C                  SAR EDX,0xc
0057A459  8B C2                     MOV EAX,EDX
0057A45B  C1 E8 1F                  SHR EAX,0x1f
0057A45E  03 D0                     ADD EDX,EAX
0057A460  8B 85 E8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffee8]
0057A466  03 D0                     ADD EDX,EAX
0057A468  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
0057A46B  52                        PUSH EDX
0057A46C  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0057A46F  51                        PUSH ECX
0057A470  50                        PUSH EAX
0057A471  56                        PUSH ESI
0057A472  E8 61 2A 13 00            CALL 0x006aced8
0057A477  83 C4 10                  ADD ESP,0x10
0057A47A  8B C8                     MOV ECX,EAX
0057A47C  85 C9                     TEST ECX,ECX
0057A47E  0F 84 5C 0B 00 00         JZ 0x0057afe0
0057A484  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0057A487  2B 85 E8 FE FF FF         SUB EAX,dword ptr [EBP + 0xfffffee8]
0057A48D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A490  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A493  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A496  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A499  C1 E0 04                  SHL EAX,0x4
0057A49C  99                        CDQ
0057A49D  F7 F9                     IDIV ECX
0057A49F  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
0057A4A5  8B C6                     MOV EAX,ESI
0057A4A7  2B 45 9C                  SUB EAX,dword ptr [EBP + -0x64]
0057A4AA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A4AD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A4B0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A4B3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A4B6  C1 E0 04                  SHL EAX,0x4
0057A4B9  99                        CDQ
0057A4BA  F7 F9                     IDIV ECX
0057A4BC  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
0057A4C2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057A4C5  85 C0                     TEST EAX,EAX
0057A4C7  7C 05                     JL 0x0057a4ce
0057A4C9  83 F8 0A                  CMP EAX,0xa
0057A4CC  7E 07                     JLE 0x0057a4d5
LAB_0057a4ce:
0057A4CE  C7 45 0C 07 00 00 00      MOV dword ptr [EBP + 0xc],0x7
LAB_0057a4d5:
0057A4D5  9B                        WAIT
0057A4D6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0057A4DD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0057A4E0  8D 3C 95 00 00 00 00      LEA EDI,[EDX*0x4 + 0x0]
0057A4E7  8B C7                     MOV EAX,EDI
0057A4E9  83 C0 03                  ADD EAX,0x3
0057A4EC  24 FC                     AND AL,0xfc
0057A4EE  E8 4D 35 1B 00            CALL 0x0072da40
0057A4F3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0057A4F6  8B C4                     MOV EAX,ESP
0057A4F8  8B D0                     MOV EDX,EAX
0057A4FA  89 95 14 FF FF FF         MOV dword ptr [EBP + 0xffffff14],EDX
0057A500  8B CF                     MOV ECX,EDI
0057A502  33 C0                     XOR EAX,EAX
0057A504  8B FA                     MOV EDI,EDX
0057A506  8B D1                     MOV EDX,ECX
0057A508  C1 E9 02                  SHR ECX,0x2
0057A50B  F3 AB                     STOSD.REP ES:EDI
0057A50D  8B CA                     MOV ECX,EDX
0057A50F  83 E1 03                  AND ECX,0x3
0057A512  F3 AA                     STOSB.REP ES:EDI
0057A514  9B                        WAIT
0057A515  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0057A51C  85 F6                     TEST ESI,ESI
0057A51E  B8 79 19 8C 02            MOV EAX,0x28c1979
0057A523  7C 0D                     JL 0x0057a532
0057A525  F7 EE                     IMUL ESI
0057A527  D1 FA                     SAR EDX,0x1
0057A529  8B C2                     MOV EAX,EDX
0057A52B  C1 E8 1F                  SHR EAX,0x1f
0057A52E  03 D0                     ADD EDX,EAX
0057A530  EB 0D                     JMP 0x0057a53f
LAB_0057a532:
0057A532  F7 EE                     IMUL ESI
0057A534  D1 FA                     SAR EDX,0x1
0057A536  8B CA                     MOV ECX,EDX
0057A538  C1 E9 1F                  SHR ECX,0x1f
0057A53B  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
LAB_0057a53f:
0057A53F  66 89 55 CC               MOV word ptr [EBP + -0x34],DX
0057A543  8B 8D E8 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffee8]
0057A549  85 C9                     TEST ECX,ECX
0057A54B  B8 79 19 8C 02            MOV EAX,0x28c1979
0057A550  7C 0D                     JL 0x0057a55f
0057A552  F7 E9                     IMUL ECX
0057A554  D1 FA                     SAR EDX,0x1
0057A556  8B C2                     MOV EAX,EDX
0057A558  C1 E8 1F                  SHR EAX,0x1f
0057A55B  03 D0                     ADD EDX,EAX
0057A55D  EB 0D                     JMP 0x0057a56c
LAB_0057a55f:
0057A55F  F7 E9                     IMUL ECX
0057A561  D1 FA                     SAR EDX,0x1
0057A563  8B CA                     MOV ECX,EDX
0057A565  C1 E9 1F                  SHR ECX,0x1f
0057A568  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
LAB_0057a56c:
0057A56C  66 89 55 CE               MOV word ptr [EBP + -0x32],DX
0057A570  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0057A573  85 C9                     TEST ECX,ECX
0057A575  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0057A57A  7C 0E                     JL 0x0057a58a
0057A57C  F7 E9                     IMUL ECX
0057A57E  C1 FA 06                  SAR EDX,0x6
0057A581  8B C2                     MOV EAX,EDX
0057A583  C1 E8 1F                  SHR EAX,0x1f
0057A586  03 D0                     ADD EDX,EAX
0057A588  EB 0E                     JMP 0x0057a598
LAB_0057a58a:
0057A58A  F7 E9                     IMUL ECX
0057A58C  C1 FA 06                  SAR EDX,0x6
0057A58F  8B CA                     MOV ECX,EDX
0057A591  C1 E9 1F                  SHR ECX,0x1f
0057A594  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
LAB_0057a598:
0057A598  66 89 55 D0               MOV word ptr [EBP + -0x30],DX
0057A59C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0057A59F  8D 88 C9 00 00 00         LEA ECX,[EAX + 0xc9]
0057A5A5  8B D1                     MOV EDX,ECX
0057A5A7  0F AF 95 70 FF FF FF      IMUL EDX,dword ptr [EBP + 0xffffff70]
0057A5AE  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057A5B3  F7 EA                     IMUL EDX
0057A5B5  C1 FA 0C                  SAR EDX,0xc
0057A5B8  8B C2                     MOV EAX,EDX
0057A5BA  C1 E8 1F                  SHR EAX,0x1f
0057A5BD  03 D0                     ADD EDX,EAX
0057A5BF  8B F2                     MOV ESI,EDX
0057A5C1  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0057A5C4  03 D6                     ADD EDX,ESI
0057A5C6  85 D2                     TEST EDX,EDX
0057A5C8  B8 79 19 8C 02            MOV EAX,0x28c1979
0057A5CD  7C 0D                     JL 0x0057a5dc
0057A5CF  F7 EA                     IMUL EDX
0057A5D1  D1 FA                     SAR EDX,0x1
0057A5D3  8B C2                     MOV EAX,EDX
0057A5D5  C1 E8 1F                  SHR EAX,0x1f
0057A5D8  03 D0                     ADD EDX,EAX
0057A5DA  EB 0D                     JMP 0x0057a5e9
LAB_0057a5dc:
0057A5DC  F7 EA                     IMUL EDX
0057A5DE  D1 FA                     SAR EDX,0x1
0057A5E0  8B C2                     MOV EAX,EDX
0057A5E2  C1 E8 1F                  SHR EAX,0x1f
0057A5E5  8D 54 02 FF               LEA EDX,[EDX + EAX*0x1 + -0x1]
LAB_0057a5e9:
0057A5E9  66 89 55 D4               MOV word ptr [EBP + -0x2c],DX
0057A5ED  0F AF 8D 4C FF FF FF      IMUL ECX,dword ptr [EBP + 0xffffff4c]
0057A5F4  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057A5F9  F7 E9                     IMUL ECX
0057A5FB  C1 FA 0C                  SAR EDX,0xc
0057A5FE  8B C2                     MOV EAX,EDX
0057A600  C1 E8 1F                  SHR EAX,0x1f
0057A603  03 D0                     ADD EDX,EAX
0057A605  8B FA                     MOV EDI,EDX
0057A607  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0057A60A  03 CF                     ADD ECX,EDI
0057A60C  85 C9                     TEST ECX,ECX
0057A60E  B8 79 19 8C 02            MOV EAX,0x28c1979
0057A613  7C 0D                     JL 0x0057a622
0057A615  F7 E9                     IMUL ECX
0057A617  D1 FA                     SAR EDX,0x1
0057A619  8B C2                     MOV EAX,EDX
0057A61B  C1 E8 1F                  SHR EAX,0x1f
0057A61E  03 D0                     ADD EDX,EAX
0057A620  EB 0D                     JMP 0x0057a62f
LAB_0057a622:
0057A622  F7 E9                     IMUL ECX
0057A624  D1 FA                     SAR EDX,0x1
0057A626  8B CA                     MOV ECX,EDX
0057A628  C1 E9 1F                  SHR ECX,0x1f
0057A62B  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
LAB_0057a62f:
0057A62F  66 89 55 D6               MOV word ptr [EBP + -0x2a],DX
0057A633  66 C7 45 D8 00 00         MOV word ptr [EBP + -0x28],0x0
0057A639  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0057A63C  2B CE                     SUB ECX,ESI
0057A63E  B8 79 19 8C 02            MOV EAX,0x28c1979
0057A643  78 0D                     JS 0x0057a652
0057A645  F7 E9                     IMUL ECX
0057A647  D1 FA                     SAR EDX,0x1
0057A649  8B C2                     MOV EAX,EDX
0057A64B  C1 E8 1F                  SHR EAX,0x1f
0057A64E  03 D0                     ADD EDX,EAX
0057A650  EB 0D                     JMP 0x0057a65f
LAB_0057a652:
0057A652  F7 E9                     IMUL ECX
0057A654  D1 FA                     SAR EDX,0x1
0057A656  8B CA                     MOV ECX,EDX
0057A658  C1 E9 1F                  SHR ECX,0x1f
0057A65B  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
LAB_0057a65f:
0057A65F  66 89 55 DC               MOV word ptr [EBP + -0x24],DX
0057A663  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0057A666  2B CF                     SUB ECX,EDI
0057A668  B8 79 19 8C 02            MOV EAX,0x28c1979
0057A66D  78 0D                     JS 0x0057a67c
0057A66F  F7 E9                     IMUL ECX
0057A671  D1 FA                     SAR EDX,0x1
0057A673  8B C2                     MOV EAX,EDX
0057A675  C1 E8 1F                  SHR EAX,0x1f
0057A678  03 D0                     ADD EDX,EAX
0057A67A  EB 0D                     JMP 0x0057a689
LAB_0057a67c:
0057A67C  F7 E9                     IMUL ECX
0057A67E  D1 FA                     SAR EDX,0x1
0057A680  8B CA                     MOV ECX,EDX
0057A682  C1 E9 1F                  SHR ECX,0x1f
0057A685  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
LAB_0057a689:
0057A689  66 89 55 DE               MOV word ptr [EBP + -0x22],DX
0057A68D  66 C7 45 E0 05 00         MOV word ptr [EBP + -0x20],0x5
0057A693  66 8B 45 CC               MOV AX,word ptr [EBP + -0x34]
0057A697  66 85 C0                  TEST AX,AX
0057A69A  0F 8C 40 09 00 00         JL 0x0057afe0
0057A6A0  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0057A6A7  0F 8D 33 09 00 00         JGE 0x0057afe0
0057A6AD  66 8B 45 CE               MOV AX,word ptr [EBP + -0x32]
0057A6B1  66 85 C0                  TEST AX,AX
0057A6B4  0F 8C 26 09 00 00         JL 0x0057afe0
0057A6BA  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0057A6C1  0F 8D 19 09 00 00         JGE 0x0057afe0
0057A6C7  66 8B 45 D0               MOV AX,word ptr [EBP + -0x30]
0057A6CB  66 85 C0                  TEST AX,AX
0057A6CE  0F 8C 0C 09 00 00         JL 0x0057afe0
0057A6D4  66 3D 05 00               CMP AX,0x5
0057A6D8  0F 8D 02 09 00 00         JGE 0x0057afe0
0057A6DE  0F BF 75 CC               MOVSX ESI,word ptr [EBP + -0x34]
0057A6E2  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
0057A6E5  0F BF 45 CE               MOVSX EAX,word ptr [EBP + -0x32]
0057A6E9  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0057A6EC  89 B5 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],ESI
0057A6F2  89 45 80                  MOV dword ptr [EBP + -0x80],EAX
0057A6F5  BA 01 00 00 00            MOV EDX,0x1
LAB_0057a6fa:
0057A6FA  0F BF 4C D5 CC            MOVSX ECX,word ptr [EBP + EDX*0x8 + -0x34]
0057A6FF  3B CE                     CMP ECX,ESI
0057A701  7D 05                     JGE 0x0057a708
0057A703  8B F1                     MOV ESI,ECX
0057A705  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
LAB_0057a708:
0057A708  0F BF 44 D5 CE            MOVSX EAX,word ptr [EBP + EDX*0x8 + -0x32]
0057A70D  3B 45 AC                  CMP EAX,dword ptr [EBP + -0x54]
0057A710  7D 03                     JGE 0x0057a715
0057A712  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_0057a715:
0057A715  3B 8D 08 FF FF FF         CMP ECX,dword ptr [EBP + 0xffffff08]
0057A71B  7E 06                     JLE 0x0057a723
0057A71D  89 8D 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],ECX
LAB_0057a723:
0057A723  8B 7D 80                  MOV EDI,dword ptr [EBP + -0x80]
0057A726  3B C7                     CMP EAX,EDI
0057A728  7E 05                     JLE 0x0057a72f
0057A72A  8B F8                     MOV EDI,EAX
0057A72C  89 7D 80                  MOV dword ptr [EBP + -0x80],EDI
LAB_0057a72f:
0057A72F  42                        INC EDX
0057A730  83 FA 03                  CMP EDX,0x3
0057A733  7C C5                     JL 0x0057a6fa
0057A735  8B 8D 08 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff08]
0057A73B  41                        INC ECX
0057A73C  89 8D 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],ECX
0057A742  47                        INC EDI
0057A743  89 7D 80                  MOV dword ptr [EBP + -0x80],EDI
0057A746  85 F6                     TEST ESI,ESI
0057A748  7D 05                     JGE 0x0057a74f
0057A74A  33 F6                     XOR ESI,ESI
0057A74C  89 75 A8                  MOV dword ptr [EBP + -0x58],ESI
LAB_0057a74f:
0057A74F  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0057A752  85 D2                     TEST EDX,EDX
0057A754  7D 05                     JGE 0x0057a75b
0057A756  33 D2                     XOR EDX,EDX
0057A758  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
LAB_0057a75b:
0057A75B  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0057A762  3B C8                     CMP ECX,EAX
0057A764  7E 08                     JLE 0x0057a76e
0057A766  8B C8                     MOV ECX,EAX
0057A768  89 8D 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],ECX
LAB_0057a76e:
0057A76E  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0057A775  3B F8                     CMP EDI,EAX
0057A777  7E 05                     JLE 0x0057a77e
0057A779  8B F8                     MOV EDI,EAX
0057A77B  89 7D 80                  MOV dword ptr [EBP + -0x80],EDI
LAB_0057a77e:
0057A77E  B8 0A 00 00 00            MOV EAX,0xa
0057A783  3B F1                     CMP ESI,ECX
0057A785  74 09                     JZ 0x0057a790
0057A787  8B C1                     MOV EAX,ECX
0057A789  2B C6                     SUB EAX,ESI
0057A78B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057A78E  D1 E0                     SHL EAX,0x1
LAB_0057a790:
0057A790  3B D7                     CMP EDX,EDI
0057A792  74 08                     JZ 0x0057a79c
0057A794  8B CF                     MOV ECX,EDI
0057A796  2B 4D AC                  SUB ECX,dword ptr [EBP + -0x54]
0057A799  0F AF C1                  IMUL EAX,ECX
LAB_0057a79c:
0057A79C  9B                        WAIT
0057A79D  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0057A7A4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0057A7A7  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0057A7AA  C1 E0 02                  SHL EAX,0x2
0057A7AD  83 C0 03                  ADD EAX,0x3
0057A7B0  24 FC                     AND AL,0xfc
0057A7B2  E8 89 32 1B 00            CALL 0x0072da40
0057A7B7  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0057A7BA  8B C4                     MOV EAX,ESP
0057A7BC  89 85 38 FF FF FF         MOV dword ptr [EBP + 0xffffff38],EAX
0057A7C2  9B                        WAIT
0057A7C3  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0057A7CA  33 D2                     XOR EDX,EDX
0057A7CC  89 95 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EDX
0057A7D2  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
LAB_0057a7d5:
0057A7D5  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
0057A7D8  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0057A7DB  8B C8                     MOV ECX,EAX
0057A7DD  3B CF                     CMP ECX,EDI
0057A7DF  0F 8D 4D 03 00 00         JGE 0x0057ab32
LAB_0057a7e5:
0057A7E5  8B CE                     MOV ECX,ESI
0057A7E7  89 8D 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],ECX
0057A7ED  8B B5 08 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff08]
0057A7F3  39 75 A8                  CMP dword ptr [EBP + -0x58],ESI
0057A7F6  0F 8D 27 03 00 00         JGE 0x0057ab23
0057A7FC  EB 0C                     JMP 0x0057a80a
LAB_0057a7fe:
0057A7FE  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0057A801  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057A804  8B 8D 18 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff18]
LAB_0057a80a:
0057A80A  66 85 C9                  TEST CX,CX
0057A80D  7C 4F                     JL 0x0057a85e
0057A80F  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
0057A816  66 3B CE                  CMP CX,SI
0057A819  7D 43                     JGE 0x0057a85e
0057A81B  66 85 C0                  TEST AX,AX
0057A81E  7C 3E                     JL 0x0057a85e
0057A820  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
0057A827  7D 35                     JGE 0x0057a85e
0057A829  66 85 D2                  TEST DX,DX
0057A82C  7C 30                     JL 0x0057a85e
0057A82E  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0057A835  7D 27                     JGE 0x0057a85e
0057A837  0F BF D2                  MOVSX EDX,DX
0057A83A  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0057A841  0F AF D7                  IMUL EDX,EDI
0057A844  0F BF C0                  MOVSX EAX,AX
0057A847  0F BF F6                  MOVSX ESI,SI
0057A84A  0F AF C6                  IMUL EAX,ESI
0057A84D  03 D0                     ADD EDX,EAX
0057A84F  0F BF C9                  MOVSX ECX,CX
0057A852  03 D1                     ADD EDX,ECX
0057A854  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0057A859  8B 3C D0                  MOV EDI,dword ptr [EAX + EDX*0x8]
0057A85C  EB 02                     JMP 0x0057a860
LAB_0057a85e:
0057A85E  33 FF                     XOR EDI,EDI
LAB_0057a860:
0057A860  85 FF                     TEST EDI,EDI
0057A862  0F 84 94 02 00 00         JZ 0x0057aafc
0057A868  8B 17                     MOV EDX,dword ptr [EDI]
0057A86A  8B CF                     MOV ECX,EDI
0057A86C  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
0057A872  85 C0                     TEST EAX,EAX
0057A874  0F 84 82 02 00 00         JZ 0x0057aafc
0057A87A  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0057A87D  83 F8 08                  CMP EAX,0x8
0057A880  0F 83 76 02 00 00         JNC 0x0057aafc
0057A886  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0057A88C  85 C9                     TEST ECX,ECX
0057A88E  74 11                     JZ 0x0057a8a1
0057A890  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0057A893  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0057A89B  0F 83 5B 02 00 00         JNC 0x0057aafc
LAB_0057a8a1:
0057A8A1  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0057A8A4  88 85 F8 FE FF FF         MOV byte ptr [EBP + 0xfffffef8],AL
0057A8AA  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
0057A8AD  88 8D FC FE FF FF         MOV byte ptr [EBP + 0xfffffefc],CL
0057A8B3  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0057A8B9  84 D2                     TEST DL,DL
0057A8BB  74 36                     JZ 0x0057a8f3
0057A8BD  8B 85 FC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffefc]
0057A8C3  25 FF 00 00 00            AND EAX,0xff
0057A8C8  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0057A8CB  8B 85 F8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef8]
0057A8D1  25 FF 00 00 00            AND EAX,0xff
0057A8D6  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
0057A8D9  8A 84 C9 EA 87 80 00      MOV AL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0057A8E0  33 C9                     XOR ECX,ECX
0057A8E2  3A 84 F6 EA 87 80 00      CMP AL,byte ptr [ESI + ESI*0x8 + 0x8087ea]
0057A8E9  0F 95 C1                  SETNZ CL
0057A8EC  8B C1                     MOV EAX,ECX
0057A8EE  E9 83 00 00 00            JMP 0x0057a976
LAB_0057a8f3:
0057A8F3  3A C1                     CMP AL,CL
0057A8F5  74 74                     JZ 0x0057a96b
0057A8F7  8B 85 F8 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef8]
0057A8FD  25 FF 00 00 00            AND EAX,0xff
0057A902  8B B5 FC FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffefc]
0057A908  81 E6 FF 00 00 00         AND ESI,0xff
0057A90E  8A 8C C6 4F 8A 80 00      MOV CL,byte ptr [ESI + EAX*0x8 + 0x808a4f]
0057A915  84 C9                     TEST CL,CL
0057A917  75 12                     JNZ 0x0057a92b
0057A919  8A 94 F0 4F 8A 80 00      MOV DL,byte ptr [EAX + ESI*0x8 + 0x808a4f]
0057A920  84 D2                     TEST DL,DL
0057A922  75 07                     JNZ 0x0057a92b
0057A924  B8 FE FF FF FF            MOV EAX,0xfffffffe
0057A929  EB 42                     JMP 0x0057a96d
LAB_0057a92b:
0057A92B  80 F9 01                  CMP CL,0x1
0057A92E  75 10                     JNZ 0x0057a940
0057A930  8A 94 F0 4F 8A 80 00      MOV DL,byte ptr [EAX + ESI*0x8 + 0x808a4f]
0057A937  84 D2                     TEST DL,DL
0057A939  75 05                     JNZ 0x0057a940
0057A93B  83 C8 FF                  OR EAX,0xffffffff
0057A93E  EB 2D                     JMP 0x0057a96d
LAB_0057a940:
0057A940  84 C9                     TEST CL,CL
0057A942  75 11                     JNZ 0x0057a955
0057A944  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
0057A94C  75 07                     JNZ 0x0057a955
0057A94E  B8 01 00 00 00            MOV EAX,0x1
0057A953  EB 18                     JMP 0x0057a96d
LAB_0057a955:
0057A955  80 F9 01                  CMP CL,0x1
0057A958  75 11                     JNZ 0x0057a96b
0057A95A  80 BC F0 4F 8A 80 00 01   CMP byte ptr [EAX + ESI*0x8 + 0x808a4f],0x1
0057A962  75 07                     JNZ 0x0057a96b
0057A964  B8 02 00 00 00            MOV EAX,0x2
0057A969  EB 02                     JMP 0x0057a96d
LAB_0057a96b:
0057A96B  33 C0                     XOR EAX,EAX
LAB_0057a96d:
0057A96D  33 D2                     XOR EDX,EDX
0057A96F  85 C0                     TEST EAX,EAX
0057A971  0F 9C C2                  SETL DL
0057A974  8B C2                     MOV EAX,EDX
LAB_0057a976:
0057A976  85 C0                     TEST EAX,EAX
0057A978  0F 84 7E 01 00 00         JZ 0x0057aafc
0057A97E  8B 07                     MOV EAX,dword ptr [EDI]
0057A980  8B CF                     MOV ECX,EDI
0057A982  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0057A988  85 C0                     TEST EAX,EAX
0057A98A  0F 84 6C 01 00 00         JZ 0x0057aafc
0057A990  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0057A993  51                        PUSH ECX
0057A994  8D 95 1C FF FF FF         LEA EDX,[EBP + 0xffffff1c]
0057A99A  52                        PUSH EDX
0057A99B  8D 85 50 FF FF FF         LEA EAX,[EBP + 0xffffff50]
0057A9A1  50                        PUSH EAX
0057A9A2  8B CF                     MOV ECX,EDI
0057A9A4  E8 3A 88 E8 FF            CALL 0x004031e3
0057A9A9  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
0057A9AD  51                        PUSH ECX
0057A9AE  0F BF 95 1C FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff1c]
0057A9B5  52                        PUSH EDX
0057A9B6  0F BF 85 50 FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff50]
0057A9BD  50                        PUSH EAX
0057A9BE  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0057A9C4  51                        PUSH ECX
0057A9C5  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
0057A9CB  52                        PUSH EDX
0057A9CC  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
0057A9D2  50                        PUSH EAX
0057A9D3  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
0057A9D6  51                        PUSH ECX
0057A9D7  8B 95 E8 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee8]
0057A9DD  52                        PUSH EDX
0057A9DE  8B 85 EC FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffeec]
0057A9E4  50                        PUSH EAX
0057A9E5  E8 3C 6D E8 FF            CALL 0x00401726
0057A9EA  83 C4 24                  ADD ESP,0x24
0057A9ED  8B F0                     MOV ESI,EAX
0057A9EF  85 F6                     TEST ESI,ESI
0057A9F1  0F 8C 96 00 00 00         JL 0x0057aa8d
0057A9F7  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
0057A9FB  51                        PUSH ECX
0057A9FC  0F BF 95 1C FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff1c]
0057AA03  52                        PUSH EDX
0057AA04  0F BF 85 50 FF FF FF      MOVSX EAX,word ptr [EBP + 0xffffff50]
0057AA0B  50                        PUSH EAX
0057AA0C  8B CE                     MOV ECX,ESI
0057AA0E  0F AF 8D 5C FF FF FF      IMUL ECX,dword ptr [EBP + 0xffffff5c]
0057AA15  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AA1A  F7 E9                     IMUL ECX
0057AA1C  C1 FA 0C                  SAR EDX,0xc
0057AA1F  8B CA                     MOV ECX,EDX
0057AA21  C1 E9 1F                  SHR ECX,0x1f
0057AA24  03 D1                     ADD EDX,ECX
0057AA26  03 55 C4                  ADD EDX,dword ptr [EBP + -0x3c]
0057AA29  52                        PUSH EDX
0057AA2A  8B CE                     MOV ECX,ESI
0057AA2C  0F AF 8D 6C FF FF FF      IMUL ECX,dword ptr [EBP + 0xffffff6c]
0057AA33  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AA38  F7 E9                     IMUL ECX
0057AA3A  C1 FA 0C                  SAR EDX,0xc
0057AA3D  8B C2                     MOV EAX,EDX
0057AA3F  C1 E8 1F                  SHR EAX,0x1f
0057AA42  03 D0                     ADD EDX,EAX
0057AA44  03 95 E8 FE FF FF         ADD EDX,dword ptr [EBP + 0xfffffee8]
0057AA4A  52                        PUSH EDX
0057AA4B  8B CE                     MOV ECX,ESI
0057AA4D  0F AF 8D 78 FF FF FF      IMUL ECX,dword ptr [EBP + 0xffffff78]
0057AA54  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AA59  F7 E9                     IMUL ECX
0057AA5B  C1 FA 0C                  SAR EDX,0xc
0057AA5E  8B CA                     MOV ECX,EDX
0057AA60  C1 E9 1F                  SHR ECX,0x1f
0057AA63  03 D1                     ADD EDX,ECX
0057AA65  03 95 EC FE FF FF         ADD EDX,dword ptr [EBP + 0xfffffeec]
0057AA6B  52                        PUSH EDX
0057AA6C  E8 9C 24 13 00            CALL 0x006acf0d
0057AA71  83 C4 18                  ADD ESP,0x18
0057AA74  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0057AA77  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0057AA7A  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0057AA7D  C1 E0 02                  SHL EAX,0x2
0057AA80  0F AF B5 40 FF FF FF      IMUL ESI,dword ptr [EBP + 0xffffff40]
0057AA87  D1 E6                     SHL ESI,0x1
0057AA89  3B C6                     CMP EAX,ESI
0057AA8B  7F 6F                     JG 0x0057aafc
LAB_0057aa8d:
0057AA8D  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
0057AA93  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0057AA96  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0057AA99  8B 95 38 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff38]
0057AA9F  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
0057AAA2  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
0057AAA5  89 10                     MOV dword ptr [EAX],EDX
0057AAA7  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
0057AAAA  89 50 26                  MOV dword ptr [EAX + 0x26],EDX
0057AAAD  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
0057AAB1  66 89 50 2A               MOV word ptr [EAX + 0x2a],DX
0057AAB5  89 78 1A                  MOV dword ptr [EAX + 0x1a],EDI
0057AAB8  66 8B 95 18 FF FF FF      MOV DX,word ptr [EBP + 0xffffff18]
0057AABF  66 89 50 14               MOV word ptr [EAX + 0x14],DX
0057AAC3  66 8B 55 84               MOV DX,word ptr [EBP + -0x7c]
0057AAC7  66 89 50 16               MOV word ptr [EAX + 0x16],DX
0057AACB  66 8B 55 90               MOV DX,word ptr [EBP + -0x70]
0057AACF  66 89 50 18               MOV word ptr [EAX + 0x18],DX
0057AAD3  0F BF 95 50 FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff50]
0057AADA  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
0057AADD  0F BF 95 1C FF FF FF      MOVSX EDX,word ptr [EBP + 0xffffff1c]
0057AAE4  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0057AAE7  0F BF 55 E4               MOVSX EDX,word ptr [EBP + -0x1c]
0057AAEB  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
0057AAEE  C7 40 1E 00 00 00 00      MOV dword ptr [EAX + 0x1e],0x0
0057AAF5  41                        INC ECX
0057AAF6  89 8D 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],ECX
LAB_0057aafc:
0057AAFC  8B 85 18 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff18]
0057AB02  40                        INC EAX
0057AB03  89 85 18 FF FF FF         MOV dword ptr [EBP + 0xffffff18],EAX
0057AB09  3B 85 08 FF FF FF         CMP EAX,dword ptr [EBP + 0xffffff08]
0057AB0F  0F 8C E9 FC FF FF         JL 0x0057a7fe
0057AB15  8B 75 A8                  MOV ESI,dword ptr [EBP + -0x58]
0057AB18  8B 7D 80                  MOV EDI,dword ptr [EBP + -0x80]
0057AB1B  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0057AB1E  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0057AB21  EB 03                     JMP 0x0057ab26
LAB_0057ab23:
0057AB23  8B 75 A8                  MOV ESI,dword ptr [EBP + -0x58]
LAB_0057ab26:
0057AB26  40                        INC EAX
0057AB27  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0057AB2A  3B C7                     CMP EAX,EDI
0057AB2C  0F 8C B3 FC FF FF         JL 0x0057a7e5
LAB_0057ab32:
0057AB32  42                        INC EDX
0057AB33  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
0057AB36  83 FA 05                  CMP EDX,0x5
0057AB39  0F 8C 96 FC FF FF         JL 0x0057a7d5
0057AB3F  8B 85 2C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff2c]
0057AB45  85 C0                     TEST EAX,EAX
0057AB47  0F 84 B5 00 00 00         JZ 0x0057ac02
0057AB4D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0057AB50  99                        CDQ
0057AB51  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
0057AB57  F7 F9                     IDIV ECX
0057AB59  89 95 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDX
0057AB5F  33 F6                     XOR ESI,ESI
0057AB61  85 C9                     TEST ECX,ECX
0057AB63  0F 8E 99 00 00 00         JLE 0x0057ac02
LAB_0057ab69:
0057AB69  3B 75 0C                  CMP ESI,dword ptr [EBP + 0xc]
0057AB6C  0F 8D 90 00 00 00         JGE 0x0057ac02
0057AB72  8B 85 3C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff3c]
0057AB78  03 C6                     ADD EAX,ESI
0057AB7A  8B 8D 2C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff2c]
0057AB80  3B C1                     CMP EAX,ECX
0057AB82  7C 02                     JL 0x0057ab86
0057AB84  2B C1                     SUB EAX,ECX
LAB_0057ab86:
0057AB86  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0057AB89  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0057AB8C  8B 85 38 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff38]
0057AB92  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
0057AB95  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0057AB98  8B 0F                     MOV ECX,dword ptr [EDI]
0057AB9A  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0057AB9E  66 89 14 F1               MOV word ptr [ECX + ESI*0x8],DX
0057ABA2  8B 0F                     MOV ECX,dword ptr [EDI]
0057ABA4  66 8B 50 0C               MOV DX,word ptr [EAX + 0xc]
0057ABA8  66 89 54 F1 02            MOV word ptr [ECX + ESI*0x8 + 0x2],DX
0057ABAD  8B 0F                     MOV ECX,dword ptr [EDI]
0057ABAF  66 8B 50 10               MOV DX,word ptr [EAX + 0x10]
0057ABB3  66 89 54 F1 04            MOV word ptr [ECX + ESI*0x8 + 0x4],DX
0057ABB8  8B 07                     MOV EAX,dword ptr [EDI]
0057ABBA  8D 04 F0                  LEA EAX,[EAX + ESI*0x8]
0057ABBD  8B 13                     MOV EDX,dword ptr [EBX]
0057ABBF  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
0057ABC3  51                        PUSH ECX
0057ABC4  66 8B 48 02               MOV CX,word ptr [EAX + 0x2]
0057ABC8  51                        PUSH ECX
0057ABC9  66 8B 00                  MOV AX,word ptr [EAX]
0057ABCC  50                        PUSH EAX
0057ABCD  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
0057ABD1  51                        PUSH ECX
0057ABD2  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
0057ABD6  50                        PUSH EAX
0057ABD7  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
0057ABDB  51                        PUSH ECX
0057ABDC  8B CB                     MOV ECX,EBX
0057ABDE  FF 52 10                  CALL dword ptr [EDX + 0x10]
0057ABE1  8B 17                     MOV EDX,dword ptr [EDI]
0057ABE3  66 89 44 F2 06            MOV word ptr [EDX + ESI*0x8 + 0x6],AX
0057ABE8  8B 85 14 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff14]
0057ABEE  C7 04 B0 01 00 00 00      MOV dword ptr [EAX + ESI*0x4],0x1
0057ABF5  46                        INC ESI
0057ABF6  3B B5 2C FF FF FF         CMP ESI,dword ptr [EBP + 0xffffff2c]
0057ABFC  0F 8C 67 FF FF FF         JL 0x0057ab69
LAB_0057ac02:
0057AC02  0F BF 43 3E               MOVSX EAX,word ptr [EBX + 0x3e]
0057AC06  50                        PUSH EAX
0057AC07  0F BF 4B 3C               MOVSX ECX,word ptr [EBX + 0x3c]
0057AC0B  51                        PUSH ECX
0057AC0C  0F BF 53 3A               MOVSX EDX,word ptr [EBX + 0x3a]
0057AC10  52                        PUSH EDX
0057AC11  0F BF 43 38               MOVSX EAX,word ptr [EBX + 0x38]
0057AC15  50                        PUSH EAX
0057AC16  0F BF 4B 36               MOVSX ECX,word ptr [EBX + 0x36]
0057AC1A  51                        PUSH ECX
0057AC1B  0F BF 53 34               MOVSX EDX,word ptr [EBX + 0x34]
0057AC1F  52                        PUSH EDX
0057AC20  E8 E8 22 13 00            CALL 0x006acf0d
0057AC25  8B F0                     MOV ESI,EAX
0057AC27  0F BF 43 3C               MOVSX EAX,word ptr [EBX + 0x3c]
0057AC2B  50                        PUSH EAX
0057AC2C  0F BF 4B 3A               MOVSX ECX,word ptr [EBX + 0x3a]
0057AC30  51                        PUSH ECX
0057AC31  0F BF 53 36               MOVSX EDX,word ptr [EBX + 0x36]
0057AC35  52                        PUSH EDX
0057AC36  0F BF 43 34               MOVSX EAX,word ptr [EBX + 0x34]
0057AC3A  50                        PUSH EAX
0057AC3B  E8 98 22 13 00            CALL 0x006aced8
0057AC40  83 C4 28                  ADD ESP,0x28
0057AC43  8B C8                     MOV ECX,EAX
0057AC45  0F BF 43 3C               MOVSX EAX,word ptr [EBX + 0x3c]
0057AC49  0F BF 53 36               MOVSX EDX,word ptr [EBX + 0x36]
0057AC4D  2B C2                     SUB EAX,EDX
0057AC4F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC52  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC55  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC58  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC5B  C1 E0 04                  SHL EAX,0x4
0057AC5E  99                        CDQ
0057AC5F  F7 FE                     IDIV ESI
0057AC61  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0057AC67  0F BF 43 3A               MOVSX EAX,word ptr [EBX + 0x3a]
0057AC6B  0F BF 53 34               MOVSX EDX,word ptr [EBX + 0x34]
0057AC6F  2B C2                     SUB EAX,EDX
0057AC71  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC74  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC77  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC7A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC7D  C1 E0 04                  SHL EAX,0x4
0057AC80  99                        CDQ
0057AC81  F7 FE                     IDIV ESI
0057AC83  89 85 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],EAX
0057AC89  0F BF 43 3E               MOVSX EAX,word ptr [EBX + 0x3e]
0057AC8D  0F BF 53 38               MOVSX EDX,word ptr [EBX + 0x38]
0057AC91  2B C2                     SUB EAX,EDX
0057AC93  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC96  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC99  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC9C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057AC9F  C1 E0 04                  SHL EAX,0x4
0057ACA2  99                        CDQ
0057ACA3  F7 FE                     IDIV ESI
0057ACA5  89 85 04 FF FF FF         MOV dword ptr [EBP + 0xffffff04],EAX
0057ACAB  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0057ACAE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057ACB1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057ACB4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0057ACB7  C1 E0 04                  SHL EAX,0x4
0057ACBA  99                        CDQ
0057ACBB  F7 FE                     IDIV ESI
0057ACBD  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0057ACC0  D9 45 1C                  FLD float ptr [EBP + 0x1c]
0057ACC3  D8 0D 9C B3 79 00         FMUL float ptr [0x0079b39c]
0057ACC9  E8 BA 35 1B 00            CALL 0x0072e288
0057ACCE  8B C8                     MOV ECX,EAX
0057ACD0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057ACD3  48                        DEC EAX
0057ACD4  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
0057ACDA  85 C0                     TEST EAX,EAX
0057ACDC  0F 8C CA 02 00 00         JL 0x0057afac
0057ACE2  8B 95 14 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff14]
0057ACE8  8D 14 82                  LEA EDX,[EDX + EAX*0x4]
0057ACEB  89 95 E4 FE FF FF         MOV dword ptr [EBP + 0xfffffee4],EDX
0057ACF1  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
0057ACF4  C1 E6 02                  SHL ESI,0x2
0057ACF7  89 B5 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],ESI
LAB_0057acfd:
0057ACFD  8B 95 14 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff14]
0057AD03  85 D2                     TEST EDX,EDX
0057AD05  74 0F                     JZ 0x0057ad16
0057AD07  8B 95 E4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffee4]
0057AD0D  83 3A 00                  CMP dword ptr [EDX],0x0
0057AD10  0F 85 77 02 00 00         JNZ 0x0057af8d
LAB_0057ad16:
0057AD16  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0057AD19  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057AD1F  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
0057AD25  89 7B 1C                  MOV dword ptr [EBX + 0x1c],EDI
0057AD28  8B C1                     MOV EAX,ECX
0057AD2A  99                        CDQ
0057AD2B  83 E2 07                  AND EDX,0x7
0057AD2E  03 D0                     ADD EDX,EAX
0057AD30  C1 FA 03                  SAR EDX,0x3
0057AD33  42                        INC EDX
0057AD34  8B C7                     MOV EAX,EDI
0057AD36  C1 E8 10                  SHR EAX,0x10
0057AD39  8B FA                     MOV EDI,EDX
0057AD3B  33 D2                     XOR EDX,EDX
0057AD3D  F7 F7                     DIV EDI
0057AD3F  8B FA                     MOV EDI,EDX
0057AD41  8B C1                     MOV EAX,ECX
0057AD43  99                        CDQ
0057AD44  83 E2 0F                  AND EDX,0xf
0057AD47  03 C2                     ADD EAX,EDX
0057AD49  C1 F8 04                  SAR EAX,0x4
0057AD4C  2B F8                     SUB EDI,EAX
0057AD4E  03 CF                     ADD ECX,EDI
0057AD50  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
0057AD53  83 7D 0C 07               CMP dword ptr [EBP + 0xc],0x7
0057AD57  0F 85 99 00 00 00         JNZ 0x0057adf6
0057AD5D  8B 96 80 AE 7C 00         MOV EDX,dword ptr [ESI + 0x7cae80]
0057AD63  0F AF D1                  IMUL EDX,ECX
0057AD66  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AD6B  F7 EA                     IMUL EDX
0057AD6D  C1 FA 0C                  SAR EDX,0xc
0057AD70  8B C2                     MOV EAX,EDX
0057AD72  C1 E8 1F                  SHR EAX,0x1f
0057AD75  03 D0                     ADD EDX,EAX
0057AD77  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
0057AD7D  0F AF 8E 7C AE 7C 00      IMUL ECX,dword ptr [ESI + 0x7cae7c]
0057AD84  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AD89  F7 E9                     IMUL ECX
0057AD8B  E9 96 00 00 00            JMP 0x0057ae26
LAB_0057adf6:
0057ADF6  8B 96 D4 AE 7C 00         MOV EDX,dword ptr [ESI + 0x7caed4]
0057ADFC  0F AF D1                  IMUL EDX,ECX
0057ADFF  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AE04  F7 EA                     IMUL EDX
0057AE06  C1 FA 0C                  SAR EDX,0xc
0057AE09  8B C2                     MOV EAX,EDX
0057AE0B  C1 E8 1F                  SHR EAX,0x1f
0057AE0E  03 D0                     ADD EDX,EAX
0057AE10  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
0057AE16  8B 96 D0 AE 7C 00         MOV EDX,dword ptr [ESI + 0x7caed0]
0057AE1C  0F AF D1                  IMUL EDX,ECX
0057AE1F  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AE24  F7 EA                     IMUL EDX
LAB_0057ae26:
0057AE26  C1 FA 0C                  SAR EDX,0xc
0057AE29  8B CA                     MOV ECX,EDX
0057AE2B  C1 E9 1F                  SHR ECX,0x1f
0057AE2E  03 D1                     ADD EDX,ECX
0057AE30  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
0057AE33  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0057AE36  0F AF 4D 18               IMUL ECX,dword ptr [EBP + 0x18]
0057AE3A  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AE3F  F7 E9                     IMUL ECX
0057AE41  C1 FA 0C                  SAR EDX,0xc
0057AE44  8B C2                     MOV EAX,EDX
0057AE46  C1 E8 1F                  SHR EAX,0x1f
0057AE49  03 D0                     ADD EDX,EAX
0057AE4B  8B CA                     MOV ECX,EDX
0057AE4D  8B 95 04 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff04]
0057AE53  0F AF 95 30 FF FF FF      IMUL EDX,dword ptr [EBP + 0xffffff30]
0057AE5A  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AE5F  F7 EA                     IMUL EDX
0057AE61  C1 FA 0C                  SAR EDX,0xc
0057AE64  8B C2                     MOV EAX,EDX
0057AE66  C1 E8 1F                  SHR EAX,0x1f
0057AE69  03 D0                     ADD EDX,EAX
0057AE6B  2B CA                     SUB ECX,EDX
0057AE6D  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0057AE70  0F AF 95 0C FF FF FF      IMUL EDX,dword ptr [EBP + 0xffffff0c]
0057AE77  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AE7C  F7 EA                     IMUL EDX
0057AE7E  8B FA                     MOV EDI,EDX
0057AE80  C1 FF 0C                  SAR EDI,0xc
0057AE83  8B D7                     MOV EDX,EDI
0057AE85  C1 EA 1F                  SHR EDX,0x1f
0057AE88  03 FA                     ADD EDI,EDX
0057AE8A  8B D1                     MOV EDX,ECX
0057AE8C  0F AF 95 64 FF FF FF      IMUL EDX,dword ptr [EBP + 0xffffff64]
0057AE93  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AE98  F7 EA                     IMUL EDX
0057AE9A  C1 FA 0C                  SAR EDX,0xc
0057AE9D  8B F2                     MOV ESI,EDX
0057AE9F  C1 EE 1F                  SHR ESI,0x1f
0057AEA2  03 D7                     ADD EDX,EDI
0057AEA4  03 F2                     ADD ESI,EDX
0057AEA6  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
0057AEAA  03 F0                     ADD ESI,EAX
0057AEAC  8B 95 04 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff04]
0057AEB2  0F AF 55 18               IMUL EDX,dword ptr [EBP + 0x18]
0057AEB6  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AEBB  F7 EA                     IMUL EDX
0057AEBD  C1 FA 0C                  SAR EDX,0xc
0057AEC0  8B C2                     MOV EAX,EDX
0057AEC2  C1 E8 1F                  SHR EAX,0x1f
0057AEC5  03 D0                     ADD EDX,EAX
0057AEC7  8B FA                     MOV EDI,EDX
0057AEC9  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0057AECC  0F AF 95 30 FF FF FF      IMUL EDX,dword ptr [EBP + 0xffffff30]
0057AED3  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AED8  F7 EA                     IMUL EDX
0057AEDA  C1 FA 0C                  SAR EDX,0xc
0057AEDD  8B C2                     MOV EAX,EDX
0057AEDF  C1 E8 1F                  SHR EAX,0x1f
0057AEE2  03 D0                     ADD EDX,EAX
0057AEE4  2B FA                     SUB EDI,EDX
0057AEE6  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
0057AEEA  03 FA                     ADD EDI,EDX
0057AEEC  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
0057AEEF  0F AF 8D 0C FF FF FF      IMUL ECX,dword ptr [EBP + 0xffffff0c]
0057AEF6  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AEFB  F7 E9                     IMUL ECX
0057AEFD  C1 FA 0C                  SAR EDX,0xc
0057AF00  8B C2                     MOV EAX,EDX
0057AF02  C1 E8 1F                  SHR EAX,0x1f
0057AF05  03 D0                     ADD EDX,EAX
0057AF07  8B FA                     MOV EDI,EDX
0057AF09  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0057AF0C  0F AF 85 64 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff64]
0057AF13  8B C8                     MOV ECX,EAX
0057AF15  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0057AF1A  F7 E9                     IMUL ECX
0057AF1C  C1 FA 0C                  SAR EDX,0xc
0057AF1F  8B CA                     MOV ECX,EDX
0057AF21  C1 E9 1F                  SHR ECX,0x1f
0057AF24  03 D1                     ADD EDX,ECX
0057AF26  2B FA                     SUB EDI,EDX
0057AF28  66 03 7B 41               ADD DI,word ptr [EBX + 0x41]
0057AF2C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0057AF2F  8B 10                     MOV EDX,dword ptr [EAX]
0057AF31  8B CF                     MOV ECX,EDI
0057AF33  8B BD 34 FF FF FF         MOV EDI,dword ptr [EBP + 0xffffff34]
0057AF39  66 89 0C FA               MOV word ptr [EDX + EDI*0x8],CX
0057AF3D  8B 10                     MOV EDX,dword ptr [EAX]
0057AF3F  66 89 74 FA 02            MOV word ptr [EDX + EDI*0x8 + 0x2],SI
0057AF44  8B 08                     MOV ECX,dword ptr [EAX]
0057AF46  66 8B 55 B8               MOV DX,word ptr [EBP + -0x48]
0057AF4A  66 89 54 F9 04            MOV word ptr [ECX + EDI*0x8 + 0x4],DX
0057AF4F  8B 00                     MOV EAX,dword ptr [EAX]
0057AF51  8D 04 F8                  LEA EAX,[EAX + EDI*0x8]
0057AF54  8B 13                     MOV EDX,dword ptr [EBX]
0057AF56  66 8B 48 04               MOV CX,word ptr [EAX + 0x4]
0057AF5A  51                        PUSH ECX
0057AF5B  66 8B 48 02               MOV CX,word ptr [EAX + 0x2]
0057AF5F  51                        PUSH ECX
0057AF60  66 8B 00                  MOV AX,word ptr [EAX]
0057AF63  50                        PUSH EAX
0057AF64  66 8B 4B 45               MOV CX,word ptr [EBX + 0x45]
0057AF68  51                        PUSH ECX
0057AF69  66 8B 43 43               MOV AX,word ptr [EBX + 0x43]
0057AF6D  50                        PUSH EAX
0057AF6E  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
0057AF72  51                        PUSH ECX
0057AF73  8B CB                     MOV ECX,EBX
0057AF75  FF 52 10                  CALL dword ptr [EDX + 0x10]
0057AF78  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0057AF7B  8B 0A                     MOV ECX,dword ptr [EDX]
0057AF7D  66 89 44 F9 06            MOV word ptr [ECX + EDI*0x8 + 0x6],AX
0057AF82  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0057AF85  8B C7                     MOV EAX,EDI
0057AF87  8B B5 E0 FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffee0]
LAB_0057af8d:
0057AF8D  48                        DEC EAX
0057AF8E  89 85 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EAX
0057AF94  83 AD E4 FE FF FF 04      SUB dword ptr [EBP + 0xfffffee4],0x4
0057AF9B  83 EE 0C                  SUB ESI,0xc
0057AF9E  89 B5 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],ESI
0057AFA4  85 C0                     TEST EAX,EAX
0057AFA6  0F 8D 51 FD FF FF         JGE 0x0057acfd
LAB_0057afac:
0057AFAC  B8 01 00 00 00            MOV EAX,0x1
0057AFB1  EB 2F                     JMP 0x0057afe2
LAB_0057afb3:
0057AFB3  68 24 AF 7C 00            PUSH 0x7caf24
0057AFB8  68 CC 4C 7A 00            PUSH 0x7a4ccc
0057AFBD  6A 00                     PUSH 0x0
0057AFBF  6A 00                     PUSH 0x0
0057AFC1  6A 4C                     PUSH 0x4c
0057AFC3  68 5C AF 7C 00            PUSH 0x7caf5c
0057AFC8  E8 03 25 13 00            CALL 0x006ad4d0
0057AFCD  83 C4 18                  ADD ESP,0x18
0057AFD0  85 C0                     TEST EAX,EAX
0057AFD2  74 01                     JZ 0x0057afd5
0057AFD4  CC                        INT3
LAB_0057afd5:
0057AFD5  83 3F 00                  CMP dword ptr [EDI],0x0
0057AFD8  74 06                     JZ 0x0057afe0
0057AFDA  57                        PUSH EDI
0057AFDB  E8 80 00 13 00            CALL 0x006ab060
LAB_0057afe0:
0057AFE0  33 C0                     XOR EAX,EAX
LAB_0057afe2:
0057AFE2  8D A5 CC FE FF FF         LEA ESP,[EBP + 0xfffffecc]
0057AFE8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0057AFEB  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0057AFF2  5F                        POP EDI
0057AFF3  5E                        POP ESI
0057AFF4  5B                        POP EBX
0057AFF5  8B E5                     MOV ESP,EBP
0057AFF7  5D                        POP EBP
0057AFF8  C3                        RET
