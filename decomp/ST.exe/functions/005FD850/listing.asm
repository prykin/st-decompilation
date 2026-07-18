FUN_005fd850:
005FD850  55                        PUSH EBP
005FD851  8B EC                     MOV EBP,ESP
005FD853  51                        PUSH ECX
005FD854  53                        PUSH EBX
005FD855  56                        PUSH ESI
005FD856  8B F1                     MOV ESI,ECX
005FD858  33 DB                     XOR EBX,EBX
005FD85A  83 C9 FF                  OR ECX,0xffffffff
005FD85D  57                        PUSH EDI
005FD85E  8B 86 26 02 00 00         MOV EAX,dword ptr [ESI + 0x226]
005FD864  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005FD867  3B C3                     CMP EAX,EBX
005FD869  74 39                     JZ 0x005fd8a4
005FD86B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005FD86E  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
005FD871  D1 E2                     SHL EDX,0x1
005FD873  52                        PUSH EDX
005FD874  E8 F7 D3 0A 00            CALL 0x006aac70
005FD879  8B F8                     MOV EDI,EAX
005FD87B  8B 86 26 02 00 00         MOV EAX,dword ptr [ESI + 0x226]
005FD881  89 BE 33 02 00 00         MOV dword ptr [ESI + 0x233],EDI
005FD887  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005FD88A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005FD88D  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
005FD890  33 C0                     XOR EAX,EAX
005FD892  D1 E1                     SHL ECX,0x1
005FD894  8B D1                     MOV EDX,ECX
005FD896  C1 E9 02                  SHR ECX,0x2
005FD899  F3 AB                     STOSD.REP ES:EDI
005FD89B  8B CA                     MOV ECX,EDX
005FD89D  83 E1 03                  AND ECX,0x3
005FD8A0  F3 AA                     STOSB.REP ES:EDI
005FD8A2  8B CB                     MOV ECX,EBX
LAB_005fd8a4:
005FD8A4  39 9E 33 02 00 00         CMP dword ptr [ESI + 0x233],EBX
005FD8AA  74 58                     JZ 0x005fd904
005FD8AC  8A 86 32 02 00 00         MOV AL,byte ptr [ESI + 0x232]
005FD8B2  84 C0                     TEST AL,AL
005FD8B4  74 4E                     JZ 0x005fd904
005FD8B6  8B 86 26 02 00 00         MOV EAX,dword ptr [ESI + 0x226]
005FD8BC  33 FF                     XOR EDI,EDI
005FD8BE  3B C3                     CMP EAX,EBX
005FD8C0  7E 42                     JLE 0x005fd904
LAB_005fd8c2:
005FD8C2  6A 40                     PUSH 0x40
005FD8C4  E8 67 0C 13 00            CALL 0x0072e530
005FD8C9  83 C4 04                  ADD ESP,0x4
005FD8CC  85 C0                     TEST EAX,EAX
005FD8CE  74 09                     JZ 0x005fd8d9
005FD8D0  8B C8                     MOV ECX,EAX
005FD8D2  E8 3F 3A E0 FF            CALL 0x00401316
005FD8D7  EB 02                     JMP 0x005fd8db
LAB_005fd8d9:
005FD8D9  33 C0                     XOR EAX,EAX
LAB_005fd8db:
005FD8DB  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
005FD8E1  83 C3 52                  ADD EBX,0x52
005FD8E4  89 44 19 F0               MOV dword ptr [ECX + EBX*0x1 + -0x10],EAX
005FD8E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FD8EB  40                        INC EAX
005FD8EC  47                        INC EDI
005FD8ED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005FD8F0  8B 86 26 02 00 00         MOV EAX,dword ptr [ESI + 0x226]
005FD8F6  3B F8                     CMP EDI,EAX
005FD8F8  7C C8                     JL 0x005fd8c2
005FD8FA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FD8FD  5F                        POP EDI
005FD8FE  5E                        POP ESI
005FD8FF  5B                        POP EBX
005FD900  8B E5                     MOV ESP,EBP
005FD902  5D                        POP EBP
005FD903  C3                        RET
LAB_005fd904:
005FD904  5F                        POP EDI
005FD905  5E                        POP ESI
005FD906  8B C1                     MOV EAX,ECX
005FD908  5B                        POP EBX
005FD909  8B E5                     MOV ESP,EBP
005FD90B  5D                        POP EBP
005FD90C  C3                        RET
