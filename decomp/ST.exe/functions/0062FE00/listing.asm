FUN_0062fe00:
0062FE00  53                        PUSH EBX
0062FE01  8B D9                     MOV EBX,ECX
0062FE03  56                        PUSH ESI
0062FE04  57                        PUSH EDI
0062FE05  33 F6                     XOR ESI,ESI
0062FE07  8D BB E5 01 00 00         LEA EDI,[EBX + 0x1e5]
LAB_0062fe0d:
0062FE0D  8B 07                     MOV EAX,dword ptr [EDI]
0062FE0F  85 C0                     TEST EAX,EAX
0062FE11  74 5F                     JZ 0x0062fe72
0062FE13  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0062FE16  85 C9                     TEST ECX,ECX
0062FE18  75 1E                     JNZ 0x0062fe38
0062FE1A  6A 40                     PUSH 0x40
0062FE1C  E8 0F E7 0F 00            CALL 0x0072e530
0062FE21  83 C4 04                  ADD ESP,0x4
0062FE24  85 C0                     TEST EAX,EAX
0062FE26  74 09                     JZ 0x0062fe31
0062FE28  8B C8                     MOV ECX,EAX
0062FE2A  E8 E7 14 DD FF            CALL 0x00401316
0062FE2F  EB 02                     JMP 0x0062fe33
LAB_0062fe31:
0062FE31  33 C0                     XOR EAX,EAX
LAB_0062fe33:
0062FE33  8B 0F                     MOV ECX,dword ptr [EDI]
0062FE35  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
LAB_0062fe38:
0062FE38  8B 07                     MOV EAX,dword ptr [EDI]
0062FE3A  8B CB                     MOV ECX,EBX
0062FE3C  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0062FE3F  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0062FE42  52                        PUSH EDX
0062FE43  50                        PUSH EAX
0062FE44  56                        PUSH ESI
0062FE45  E8 44 33 DD FF            CALL 0x0040318e
0062FE4A  85 C0                     TEST EAX,EAX
0062FE4C  75 1C                     JNZ 0x0062fe6a
0062FE4E  83 BB E1 01 00 00 01      CMP dword ptr [EBX + 0x1e1],0x1
0062FE55  75 09                     JNZ 0x0062fe60
0062FE57  8B CB                     MOV ECX,EBX
0062FE59  E8 27 5A DD FF            CALL 0x00405885
0062FE5E  EB 12                     JMP 0x0062fe72
LAB_0062fe60:
0062FE60  56                        PUSH ESI
0062FE61  8B CB                     MOV ECX,EBX
0062FE63  E8 C0 48 DD FF            CALL 0x00404728
0062FE68  EB 08                     JMP 0x0062fe72
LAB_0062fe6a:
0062FE6A  56                        PUSH ESI
0062FE6B  8B CB                     MOV ECX,EBX
0062FE6D  E8 4C 49 DD FF            CALL 0x004047be
LAB_0062fe72:
0062FE72  46                        INC ESI
0062FE73  83 C7 04                  ADD EDI,0x4
0062FE76  83 FE 05                  CMP ESI,0x5
0062FE79  7C 92                     JL 0x0062fe0d
0062FE7B  5F                        POP EDI
0062FE7C  5E                        POP ESI
0062FE7D  5B                        POP EBX
0062FE7E  C3                        RET
