FUN_004e7e10:
004E7E10  55                        PUSH EBP
004E7E11  8B EC                     MOV EBP,ESP
004E7E13  51                        PUSH ECX
004E7E14  56                        PUSH ESI
004E7E15  57                        PUSH EDI
004E7E16  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E7E19  8B F1                     MOV ESI,ECX
004E7E1B  85 FF                     TEST EDI,EDI
004E7E1D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004E7E20  7C 61                     JL 0x004e7e83
004E7E22  83 FF 08                  CMP EDI,0x8
004E7E25  7D 5C                     JGE 0x004e7e83
004E7E27  53                        PUSH EBX
004E7E28  57                        PUSH EDI
004E7E29  E8 1B D5 F1 FF            CALL 0x00405349
004E7E2E  57                        PUSH EDI
004E7E2F  8B CE                     MOV ECX,ESI
004E7E31  E8 81 CB F1 FF            CALL 0x004049b7
004E7E36  25 FF 00 00 00            AND EAX,0xff
004E7E3B  48                        DEC EAX
004E7E3C  8B D8                     MOV EBX,EAX
004E7E3E  8B 04 9D C8 0D 7C 00      MOV EAX,dword ptr [EBX*0x4 + 0x7c0dc8]
004E7E45  83 38 00                  CMP dword ptr [EAX],0x0
004E7E48  74 2E                     JZ 0x004e7e78
004E7E4A  33 F6                     XOR ESI,ESI
LAB_004e7e4c:
004E7E4C  8B 4C 06 05               MOV ECX,dword ptr [ESI + EAX*0x1 + 0x5]
004E7E50  85 C9                     TEST ECX,ECX
004E7E52  75 14                     JNZ 0x004e7e68
004E7E54  8B 14 06                  MOV EDX,dword ptr [ESI + EAX*0x1]
004E7E57  33 C9                     XOR ECX,ECX
004E7E59  8A 4C 06 04               MOV CL,byte ptr [ESI + EAX*0x1 + 0x4]
004E7E5D  51                        PUSH ECX
004E7E5E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004E7E61  52                        PUSH EDX
004E7E62  57                        PUSH EDI
004E7E63  E8 E6 D4 F1 FF            CALL 0x0040534e
LAB_004e7e68:
004E7E68  8B 04 9D C8 0D 7C 00      MOV EAX,dword ptr [EBX*0x4 + 0x7c0dc8]
004E7E6F  83 C6 19                  ADD ESI,0x19
004E7E72  83 3C 06 00               CMP dword ptr [ESI + EAX*0x1],0x0
004E7E76  75 D4                     JNZ 0x004e7e4c
LAB_004e7e78:
004E7E78  5B                        POP EBX
004E7E79  5F                        POP EDI
004E7E7A  33 C0                     XOR EAX,EAX
004E7E7C  5E                        POP ESI
004E7E7D  8B E5                     MOV ESP,EBP
004E7E7F  5D                        POP EBP
004E7E80  C2 04 00                  RET 0x4
LAB_004e7e83:
004E7E83  5F                        POP EDI
004E7E84  33 C0                     XOR EAX,EAX
004E7E86  5E                        POP ESI
004E7E87  8B E5                     MOV ESP,EBP
004E7E89  5D                        POP EBP
004E7E8A  C2 04 00                  RET 0x4
