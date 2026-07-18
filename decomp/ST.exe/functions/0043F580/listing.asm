FUN_0043f580:
0043F580  55                        PUSH EBP
0043F581  8B EC                     MOV EBP,ESP
0043F583  83 EC 20                  SUB ESP,0x20
0043F586  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
0043F58A  53                        PUSH EBX
0043F58B  56                        PUSH ESI
0043F58C  0F BF 5D 10               MOVSX EBX,word ptr [EBP + 0x10]
0043F590  0F BF 55 20               MOVSX EDX,word ptr [EBP + 0x20]
0043F594  0F BF 75 18               MOVSX ESI,word ptr [EBP + 0x18]
0043F598  8D 4C 18 FF               LEA ECX,[EAX + EBX*0x1 + -0x1]
0043F59C  57                        PUSH EDI
0043F59D  0F BF 45 24               MOVSX EAX,word ptr [EBP + 0x24]
0043F5A1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0043F5A4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0043F5A7  0F BF 4D 14               MOVSX ECX,word ptr [EBP + 0x14]
0043F5AB  85 DB                     TEST EBX,EBX
0043F5AD  8D 54 0A FF               LEA EDX,[EDX + ECX*0x1 + -0x1]
0043F5B1  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0043F5B4  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0043F5B7  8D 7C 30 FF               LEA EDI,[EAX + ESI*0x1 + -0x1]
0043F5BB  7D 0A                     JGE 0x0043f5c7
0043F5BD  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0043F5C4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0043f5c7:
0043F5C7  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0043F5CE  48                        DEC EAX
0043F5CF  39 45 10                  CMP dword ptr [EBP + 0x10],EAX
0043F5D2  7E 03                     JLE 0x0043f5d7
0043F5D4  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0043f5d7:
0043F5D7  85 C9                     TEST ECX,ECX
0043F5D9  7D 07                     JGE 0x0043f5e2
0043F5DB  C7 45 1C 00 00 00 00      MOV dword ptr [EBP + 0x1c],0x0
LAB_0043f5e2:
0043F5E2  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0043F5E9  48                        DEC EAX
0043F5EA  3B D0                     CMP EDX,EAX
0043F5EC  7E 03                     JLE 0x0043f5f1
0043F5EE  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_0043f5f1:
0043F5F1  85 F6                     TEST ESI,ESI
0043F5F3  7D 02                     JGE 0x0043f5f7
0043F5F5  33 F6                     XOR ESI,ESI
LAB_0043f5f7:
0043F5F7  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
0043F5FE  48                        DEC EAX
0043F5FF  3B F8                     CMP EDI,EAX
0043F601  7E 02                     JLE 0x0043f605
0043F603  8B F8                     MOV EDI,EAX
LAB_0043f605:
0043F605  6A 01                     PUSH 0x1
0043F607  6A 02                     PUSH 0x2
0043F609  6A 00                     PUSH 0x0
0043F60B  6A 00                     PUSH 0x0
0043F60D  E8 7E EC 26 00            CALL 0x006ae290
0043F612  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0043F619  8D 4E FF                  LEA ECX,[ESI + -0x1]
0043F61C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0043F61F  0F AF CA                  IMUL ECX,EDX
0043F622  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0043F629  0F AF 55 1C               IMUL EDX,dword ptr [EBP + 0x1c]
0043F62D  8B C3                     MOV EAX,EBX
0043F62F  03 C1                     ADD EAX,ECX
0043F631  03 D0                     ADD EDX,EAX
0043F633  3B F7                     CMP ESI,EDI
0043F635  0F 8F EA 00 00 00         JG 0x0043f725
0043F63B  2B FE                     SUB EDI,ESI
0043F63D  47                        INC EDI
0043F63E  89 7D 24                  MOV dword ptr [EBP + 0x24],EDI
LAB_0043f641:
0043F641  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0043F648  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0043F64F  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0043F652  03 D1                     ADD EDX,ECX
0043F654  8B CA                     MOV ECX,EDX
0043F656  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0043F659  2B C8                     SUB ECX,EAX
0043F65B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0043F65E  3B F0                     CMP ESI,EAX
0043F660  0F 8F B2 00 00 00         JG 0x0043f718
0043F666  2B C6                     SUB EAX,ESI
0043F668  40                        INC EAX
0043F669  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_0043f66c:
0043F66C  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
0043F673  03 CE                     ADD ECX,ESI
0043F675  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0043F678  3B DE                     CMP EBX,ESI
0043F67A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0043F67D  0F 8F 8B 00 00 00         JG 0x0043f70e
0043F683  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0043F686  8B C6                     MOV EAX,ESI
0043F688  2B C2                     SUB EAX,EDX
0043F68A  8D 1C CD F8 FF FF FF      LEA EBX,[ECX*0x8 + 0xfffffff8]
0043F691  40                        INC EAX
0043F692  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
LAB_0043f695:
0043F695  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0043F69B  83 C3 08                  ADD EBX,0x8
0043F69E  8B 3C 0B                  MOV EDI,dword ptr [EBX + ECX*0x1]
0043F6A1  85 FF                     TEST EDI,EDI
0043F6A3  74 54                     JZ 0x0043f6f9
0043F6A5  0F BE 55 08               MOVSX EDX,byte ptr [EBP + 0x8]
0043F6A9  39 57 24                  CMP dword ptr [EDI + 0x24],EDX
0043F6AC  75 4B                     JNZ 0x0043f6f9
0043F6AE  8B 07                     MOV EAX,dword ptr [EDI]
0043F6B0  8D 4D E0                  LEA ECX,[EBP + -0x20]
0043F6B3  51                        PUSH ECX
0043F6B4  8B CF                     MOV ECX,EDI
0043F6B6  FF 50 74                  CALL dword ptr [EAX + 0x74]
0043F6B9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043F6BC  8D 75 E0                  LEA ESI,[EBP + -0x20]
LAB_0043f6bf:
0043F6BF  8A 10                     MOV DL,byte ptr [EAX]
0043F6C1  8A CA                     MOV CL,DL
0043F6C3  3A 16                     CMP DL,byte ptr [ESI]
0043F6C5  75 1C                     JNZ 0x0043f6e3
0043F6C7  84 C9                     TEST CL,CL
0043F6C9  74 14                     JZ 0x0043f6df
0043F6CB  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0043F6CE  8A CA                     MOV CL,DL
0043F6D0  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
0043F6D3  75 0E                     JNZ 0x0043f6e3
0043F6D5  83 C0 02                  ADD EAX,0x2
0043F6D8  83 C6 02                  ADD ESI,0x2
0043F6DB  84 C9                     TEST CL,CL
0043F6DD  75 E0                     JNZ 0x0043f6bf
LAB_0043f6df:
0043F6DF  33 C0                     XOR EAX,EAX
0043F6E1  EB 05                     JMP 0x0043f6e8
LAB_0043f6e3:
0043F6E3  1B C0                     SBB EAX,EAX
0043F6E5  83 D8 FF                  SBB EAX,-0x1
LAB_0043f6e8:
0043F6E8  85 C0                     TEST EAX,EAX
0043F6EA  75 0D                     JNZ 0x0043f6f9
0043F6EC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043F6EF  83 C7 32                  ADD EDI,0x32
0043F6F2  57                        PUSH EDI
0043F6F3  50                        PUSH EAX
0043F6F4  E8 C7 EA 26 00            CALL 0x006ae1c0
LAB_0043f6f9:
0043F6F9  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0043F6FC  48                        DEC EAX
0043F6FD  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
0043F700  75 93                     JNZ 0x0043f695
0043F702  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0043F705  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0043F708  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0043F70B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
LAB_0043f70e:
0043F70E  48                        DEC EAX
0043F70F  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0043F712  0F 85 54 FF FF FF         JNZ 0x0043f66c
LAB_0043f718:
0043F718  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0043F71B  48                        DEC EAX
0043F71C  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
0043F71F  0F 85 1C FF FF FF         JNZ 0x0043f641
LAB_0043f725:
0043F725  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043F728  5F                        POP EDI
0043F729  5E                        POP ESI
0043F72A  5B                        POP EBX
0043F72B  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0043F72E  85 C9                     TEST ECX,ECX
0043F730  75 08                     JNZ 0x0043f73a
0043F732  50                        PUSH EAX
0043F733  E8 D8 E9 26 00            CALL 0x006ae110
0043F738  33 C0                     XOR EAX,EAX
LAB_0043f73a:
0043F73A  8B E5                     MOV ESP,EBP
0043F73C  5D                        POP EBP
0043F73D  C2 20 00                  RET 0x20
