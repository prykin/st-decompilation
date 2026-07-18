FUN_0075d890:
0075D890  55                        PUSH EBP
0075D891  8B EC                     MOV EBP,ESP
0075D893  56                        PUSH ESI
0075D894  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075D897  57                        PUSH EDI
0075D898  6A 18                     PUSH 0x18
0075D89A  8B 06                     MOV EAX,dword ptr [ESI]
0075D89C  6A 01                     PUSH 0x1
0075D89E  56                        PUSH ESI
0075D89F  FF 10                     CALL dword ptr [EAX]
0075D8A1  8B F8                     MOV EDI,EAX
0075D8A3  89 BE B6 01 00 00         MOV dword ptr [ESI + 0x1b6],EDI
0075D8A9  C7 07 80 DE 75 00         MOV dword ptr [EDI],0x75de80
0075D8AF  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0075D8B2  48                        DEC EAX
0075D8B3  83 F8 04                  CMP EAX,0x4
0075D8B6  77 45                     JA 0x0075d8fd
switchD_0075d8b8::switchD:
0075D8B8  FF 24 85 68 DA 75 00      JMP dword ptr [EAX*0x4 + 0x75da68]
switchD_0075d8b8::caseD_1:
0075D8BF  83 7E 1C 01               CMP dword ptr [ESI + 0x1c],0x1
0075D8C3  74 56                     JZ 0x0075d91b
0075D8C5  68 27 01 00 00            PUSH 0x127
0075D8CA  EB 3C                     JMP 0x0075d908
switchD_0075d8b8::caseD_2:
0075D8CC  83 7E 1C 03               CMP dword ptr [ESI + 0x1c],0x3
0075D8D0  74 49                     JZ 0x0075d91b
0075D8D2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075D8D8  68 2D 01 00 00            PUSH 0x12d
0075D8DD  68 70 2E 7F 00            PUSH 0x7f2e70
0075D8E2  52                        PUSH EDX
0075D8E3  EB 2F                     JMP 0x0075d914
switchD_0075d8b8::caseD_4:
0075D8E5  83 7E 1C 04               CMP dword ptr [ESI + 0x1c],0x4
0075D8E9  74 30                     JZ 0x0075d91b
0075D8EB  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075D8F0  68 33 01 00 00            PUSH 0x133
0075D8F5  68 70 2E 7F 00            PUSH 0x7f2e70
0075D8FA  50                        PUSH EAX
0075D8FB  EB 17                     JMP 0x0075d914
switchD_0075d8b8::default:
0075D8FD  83 7E 1C 01               CMP dword ptr [ESI + 0x1c],0x1
0075D901  7D 18                     JGE 0x0075d91b
0075D903  68 38 01 00 00            PUSH 0x138
LAB_0075d908:
0075D908  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075D90E  68 70 2E 7F 00            PUSH 0x7f2e70
0075D913  51                        PUSH ECX
LAB_0075d914:
0075D914  6A 08                     PUSH 0x8
0075D916  E8 25 85 F4 FF            CALL 0x006a5e40
LAB_0075d91b:
0075D91B  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
0075D91E  8B C1                     MOV EAX,ECX
0075D920  48                        DEC EAX
0075D921  0F 84 D4 00 00 00         JZ 0x0075d9fb
0075D927  48                        DEC EAX
0075D928  0F 84 87 00 00 00         JZ 0x0075d9b5
0075D92E  83 E8 02                  SUB EAX,0x2
0075D931  74 33                     JZ 0x0075d966
0075D933  3B 4E 20                  CMP ECX,dword ptr [ESI + 0x20]
0075D936  75 12                     JNZ 0x0075d94a
0075D938  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0075D93B  89 56 70                  MOV dword ptr [ESI + 0x70],EDX
0075D93E  C7 47 04 70 DC 75 00      MOV dword ptr [EDI + 0x4],0x75dc70
0075D945  E9 FD 00 00 00            JMP 0x0075da47
LAB_0075d94a:
0075D94A  68 6F 01 00 00            PUSH 0x16f
LAB_0075d94f:
0075D94F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075D954  68 70 2E 7F 00            PUSH 0x7f2e70
0075D959  50                        PUSH EAX
0075D95A  6A 19                     PUSH 0x19
0075D95C  E8 DF 84 F4 FF            CALL 0x006a5e40
0075D961  E9 E1 00 00 00            JMP 0x0075da47
LAB_0075d966:
0075D966  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0075D969  C7 46 70 04 00 00 00      MOV dword ptr [ESI + 0x70],0x4
0075D970  83 F8 05                  CMP EAX,0x5
0075D973  75 12                     JNZ 0x0075d987
0075D975  56                        PUSH ESI
0075D976  C7 47 04 30 DD 75 00      MOV dword ptr [EDI + 0x4],0x75dd30
0075D97D  E8 FE 00 00 00            CALL 0x0075da80
0075D982  E9 C0 00 00 00            JMP 0x0075da47
LAB_0075d987:
0075D987  83 F8 04                  CMP EAX,0x4
0075D98A  75 0C                     JNZ 0x0075d998
0075D98C  C7 47 04 70 DC 75 00      MOV dword ptr [EDI + 0x4],0x75dc70
0075D993  E9 AF 00 00 00            JMP 0x0075da47
LAB_0075d998:
0075D998  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075D99E  68 66 01 00 00            PUSH 0x166
0075D9A3  68 70 2E 7F 00            PUSH 0x7f2e70
0075D9A8  51                        PUSH ECX
0075D9A9  6A 19                     PUSH 0x19
0075D9AB  E8 90 84 F4 FF            CALL 0x006a5e40
0075D9B0  E9 92 00 00 00            JMP 0x0075da47
LAB_0075d9b5:
0075D9B5  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0075D9B8  C7 46 70 03 00 00 00      MOV dword ptr [ESI + 0x70],0x3
0075D9BF  83 F8 03                  CMP EAX,0x3
0075D9C2  75 0F                     JNZ 0x0075d9d3
0075D9C4  56                        PUSH ESI
0075D9C5  C7 47 04 50 DB 75 00      MOV dword ptr [EDI + 0x4],0x75db50
0075D9CC  E8 AF 00 00 00            CALL 0x0075da80
0075D9D1  EB 74                     JMP 0x0075da47
LAB_0075d9d3:
0075D9D3  83 F8 02                  CMP EAX,0x2
0075D9D6  75 09                     JNZ 0x0075d9e1
0075D9D8  C7 47 04 70 DC 75 00      MOV dword ptr [EDI + 0x4],0x75dc70
0075D9DF  EB 66                     JMP 0x0075da47
LAB_0075d9e1:
0075D9E1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075D9E7  68 5A 01 00 00            PUSH 0x15a
0075D9EC  68 70 2E 7F 00            PUSH 0x7f2e70
0075D9F1  52                        PUSH EDX
0075D9F2  6A 19                     PUSH 0x19
0075D9F4  E8 47 84 F4 FF            CALL 0x006a5e40
0075D9F9  EB 4C                     JMP 0x0075da47
LAB_0075d9fb:
0075D9FB  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0075D9FE  B9 01 00 00 00            MOV ECX,0x1
0075DA03  3B C1                     CMP EAX,ECX
0075DA05  89 4E 70                  MOV dword ptr [ESI + 0x70],ECX
0075DA08  74 0F                     JZ 0x0075da19
0075DA0A  83 F8 03                  CMP EAX,0x3
0075DA0D  74 0A                     JZ 0x0075da19
0075DA0F  68 4B 01 00 00            PUSH 0x14b
0075DA14  E9 36 FF FF FF            JMP 0x0075d94f
LAB_0075da19:
0075DA19  C7 47 04 00 DD 75 00      MOV dword ptr [EDI + 0x4],0x75dd00
0075DA20  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0075DA23  3B D1                     CMP EDX,ECX
0075DA25  8B C1                     MOV EAX,ECX
0075DA27  7E 1E                     JLE 0x0075da47
0075DA29  B9 54 00 00 00            MOV ECX,0x54
LAB_0075da2e:
0075DA2E  8B 96 D0 00 00 00         MOV EDX,dword ptr [ESI + 0xd0]
0075DA34  40                        INC EAX
0075DA35  C7 44 0A 30 00 00 00 00   MOV dword ptr [EDX + ECX*0x1 + 0x30],0x0
0075DA3D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0075DA40  83 C1 54                  ADD ECX,0x54
0075DA43  3B C2                     CMP EAX,EDX
0075DA45  7C E7                     JL 0x0075da2e
LAB_0075da47:
0075DA47  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
0075DA4A  85 C0                     TEST EAX,EAX
0075DA4C  74 0D                     JZ 0x0075da5b
0075DA4E  C7 46 74 01 00 00 00      MOV dword ptr [ESI + 0x74],0x1
0075DA55  5F                        POP EDI
0075DA56  5E                        POP ESI
0075DA57  5D                        POP EBP
0075DA58  C2 04 00                  RET 0x4
LAB_0075da5b:
0075DA5B  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
0075DA5E  5F                        POP EDI
0075DA5F  89 46 74                  MOV dword ptr [ESI + 0x74],EAX
0075DA62  5E                        POP ESI
0075DA63  5D                        POP EBP
0075DA64  C2 04 00                  RET 0x4
