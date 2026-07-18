FUN_0075a350:
0075A350  55                        PUSH EBP
0075A351  8B EC                     MOV EBP,ESP
0075A353  53                        PUSH EBX
0075A354  56                        PUSH ESI
0075A355  57                        PUSH EDI
0075A356  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075A359  8B B7 96 01 00 00         MOV ESI,dword ptr [EDI + 0x196]
0075A35F  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
0075A362  85 C0                     TEST EAX,EAX
0075A364  75 28                     JNZ 0x0075a38e
0075A366  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
0075A369  8B 87 9A 01 00 00         MOV EAX,dword ptr [EDI + 0x19a]
0075A36F  8B 54 8E 38               MOV EDX,dword ptr [ESI + ECX*0x4 + 0x38]
0075A373  52                        PUSH EDX
0075A374  57                        PUSH EDI
0075A375  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0075A378  85 C0                     TEST EAX,EAX
0075A37A  0F 84 FA 00 00 00         JZ 0x0075a47a
0075A380  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
0075A383  C7 46 30 01 00 00 00      MOV dword ptr [ESI + 0x30],0x1
0075A38A  40                        INC EAX
0075A38B  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
LAB_0075a38e:
0075A38E  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0075A391  83 E8 00                  SUB EAX,0x0
0075A394  74 52                     JZ 0x0075a3e8
0075A396  48                        DEC EAX
0075A397  74 7A                     JZ 0x0075a413
0075A399  48                        DEC EAX
0075A39A  0F 85 DA 00 00 00         JNZ 0x0075a47a
0075A3A0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075A3A3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075A3A6  51                        PUSH ECX
0075A3A7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075A3AA  8B 87 9E 01 00 00         MOV EAX,dword ptr [EDI + 0x19e]
0075A3B0  52                        PUSH EDX
0075A3B1  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
0075A3B4  51                        PUSH ECX
0075A3B5  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
0075A3B8  8D 5E 34                  LEA EBX,[ESI + 0x34]
0075A3BB  52                        PUSH EDX
0075A3BC  53                        PUSH EBX
0075A3BD  8B 54 8E 38               MOV EDX,dword ptr [ESI + ECX*0x4 + 0x38]
0075A3C1  52                        PUSH EDX
0075A3C2  57                        PUSH EDI
0075A3C3  FF 50 04                  CALL dword ptr [EAX + 0x4]
0075A3C6  8B 03                     MOV EAX,dword ptr [EBX]
0075A3C8  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
0075A3CB  3B C1                     CMP EAX,ECX
0075A3CD  0F 82 A7 00 00 00         JC 0x0075a47a
0075A3D3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075A3D6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0075A3D9  C7 46 44 00 00 00 00      MOV dword ptr [ESI + 0x44],0x0
0075A3E0  39 0A                     CMP dword ptr [EDX],ECX
0075A3E2  0F 83 92 00 00 00         JNC 0x0075a47a
LAB_0075a3e8:
0075A3E8  8B 4E 4C                  MOV ECX,dword ptr [ESI + 0x4c]
0075A3EB  C7 46 34 00 00 00 00      MOV dword ptr [ESI + 0x34],0x0
0075A3F2  8B 87 2A 01 00 00         MOV EAX,dword ptr [EDI + 0x12a]
0075A3F8  48                        DEC EAX
0075A3F9  89 46 48                  MOV dword ptr [ESI + 0x48],EAX
0075A3FC  8B 87 2E 01 00 00         MOV EAX,dword ptr [EDI + 0x12e]
0075A402  3B C8                     CMP ECX,EAX
0075A404  75 06                     JNZ 0x0075a40c
0075A406  57                        PUSH EDI
0075A407  E8 84 01 00 00            CALL 0x0075a590
LAB_0075a40c:
0075A40C  C7 46 44 01 00 00 00      MOV dword ptr [ESI + 0x44],0x1
LAB_0075a413:
0075A413  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075A416  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075A419  50                        PUSH EAX
0075A41A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075A41D  8B 97 9E 01 00 00         MOV EDX,dword ptr [EDI + 0x19e]
0075A423  51                        PUSH ECX
0075A424  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
0075A427  50                        PUSH EAX
0075A428  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0075A42B  8D 5E 34                  LEA EBX,[ESI + 0x34]
0075A42E  51                        PUSH ECX
0075A42F  53                        PUSH EBX
0075A430  8B 4C 86 38               MOV ECX,dword ptr [ESI + EAX*0x4 + 0x38]
0075A434  51                        PUSH ECX
0075A435  57                        PUSH EDI
0075A436  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075A439  8B 13                     MOV EDX,dword ptr [EBX]
0075A43B  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
0075A43E  3B D0                     CMP EDX,EAX
0075A440  72 38                     JC 0x0075a47a
0075A442  83 7E 4C 01               CMP dword ptr [ESI + 0x4c],0x1
0075A446  75 06                     JNZ 0x0075a44e
0075A448  57                        PUSH EDI
0075A449  E8 42 00 00 00            CALL 0x0075a490
LAB_0075a44e:
0075A44E  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
0075A451  C7 46 30 00 00 00 00      MOV dword ptr [ESI + 0x30],0x0
0075A458  83 F2 01                  XOR EDX,0x1
0075A45B  89 56 40                  MOV dword ptr [ESI + 0x40],EDX
0075A45E  8B 87 2A 01 00 00         MOV EAX,dword ptr [EDI + 0x12a]
0075A464  40                        INC EAX
0075A465  89 03                     MOV dword ptr [EBX],EAX
0075A467  8B 8F 2A 01 00 00         MOV ECX,dword ptr [EDI + 0x12a]
0075A46D  83 C1 02                  ADD ECX,0x2
0075A470  C7 46 44 02 00 00 00      MOV dword ptr [ESI + 0x44],0x2
0075A477  89 4E 48                  MOV dword ptr [ESI + 0x48],ECX
LAB_0075a47a:
0075A47A  5F                        POP EDI
0075A47B  5E                        POP ESI
0075A47C  5B                        POP EBX
0075A47D  5D                        POP EBP
0075A47E  C2 10 00                  RET 0x10
