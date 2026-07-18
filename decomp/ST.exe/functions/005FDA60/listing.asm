FUN_005fda60:
005FDA60  55                        PUSH EBP
005FDA61  8B EC                     MOV EBP,ESP
005FDA63  51                        PUSH ECX
005FDA64  53                        PUSH EBX
005FDA65  8B D9                     MOV EBX,ECX
005FDA67  56                        PUSH ESI
005FDA68  57                        PUSH EDI
005FDA69  8B 83 33 02 00 00         MOV EAX,dword ptr [EBX + 0x233]
005FDA6F  8D BB 33 02 00 00         LEA EDI,[EBX + 0x233]
005FDA75  33 F6                     XOR ESI,ESI
005FDA77  3B C6                     CMP EAX,ESI
005FDA79  74 65                     JZ 0x005fdae0
005FDA7B  8B 83 26 02 00 00         MOV EAX,dword ptr [EBX + 0x226]
005FDA81  3B C6                     CMP EAX,ESI
005FDA83  74 55                     JZ 0x005fdada
005FDA85  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005FDA88  7E 50                     JLE 0x005fdada
LAB_005fda8a:
005FDA8A  8B 07                     MOV EAX,dword ptr [EDI]
005FDA8C  8B 4C 06 4E               MOV ECX,dword ptr [ESI + EAX*0x1 + 0x4e]
005FDA90  8D 44 06 4E               LEA EAX,[ESI + EAX*0x1 + 0x4e]
005FDA94  85 C9                     TEST ECX,ECX
005FDA96  74 06                     JZ 0x005fda9e
005FDA98  50                        PUSH EAX
005FDA99  E8 C2 D5 0A 00            CALL 0x006ab060
LAB_005fda9e:
005FDA9E  8B 0F                     MOV ECX,dword ptr [EDI]
005FDAA0  8B 4C 0E 42               MOV ECX,dword ptr [ESI + ECX*0x1 + 0x42]
005FDAA4  85 C9                     TEST ECX,ECX
005FDAA6  74 1E                     JZ 0x005fdac6
005FDAA8  E8 28 47 E0 FF            CALL 0x004021d5
005FDAAD  8B 17                     MOV EDX,dword ptr [EDI]
005FDAAF  8B 44 16 42               MOV EAX,dword ptr [ESI + EDX*0x1 + 0x42]
005FDAB3  50                        PUSH EAX
005FDAB4  E8 F7 07 13 00            CALL 0x0072e2b0
005FDAB9  8B 0F                     MOV ECX,dword ptr [EDI]
005FDABB  83 C4 04                  ADD ESP,0x4
005FDABE  C7 44 0E 42 00 00 00 00   MOV dword ptr [ESI + ECX*0x1 + 0x42],0x0
LAB_005fdac6:
005FDAC6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FDAC9  8B 8B 26 02 00 00         MOV ECX,dword ptr [EBX + 0x226]
005FDACF  40                        INC EAX
005FDAD0  83 C6 52                  ADD ESI,0x52
005FDAD3  3B C1                     CMP EAX,ECX
005FDAD5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005FDAD8  7C B0                     JL 0x005fda8a
LAB_005fdada:
005FDADA  57                        PUSH EDI
005FDADB  E8 80 D5 0A 00            CALL 0x006ab060
LAB_005fdae0:
005FDAE0  8B 8B 3B 02 00 00         MOV ECX,dword ptr [EBX + 0x23b]
005FDAE6  8D 83 3B 02 00 00         LEA EAX,[EBX + 0x23b]
005FDAEC  85 C9                     TEST ECX,ECX
005FDAEE  74 06                     JZ 0x005fdaf6
005FDAF0  50                        PUSH EAX
005FDAF1  E8 6A D5 0A 00            CALL 0x006ab060
LAB_005fdaf6:
005FDAF6  8B 8B 3F 02 00 00         MOV ECX,dword ptr [EBX + 0x23f]
005FDAFC  8D 83 3F 02 00 00         LEA EAX,[EBX + 0x23f]
005FDB02  5F                        POP EDI
005FDB03  5E                        POP ESI
005FDB04  85 C9                     TEST ECX,ECX
005FDB06  5B                        POP EBX
005FDB07  74 06                     JZ 0x005fdb0f
005FDB09  50                        PUSH EAX
005FDB0A  E8 51 D5 0A 00            CALL 0x006ab060
LAB_005fdb0f:
005FDB0F  8B E5                     MOV ESP,EBP
005FDB11  5D                        POP EBP
005FDB12  C3                        RET
