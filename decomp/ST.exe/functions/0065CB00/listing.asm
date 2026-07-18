FUN_0065cb00:
0065CB00  55                        PUSH EBP
0065CB01  8B EC                     MOV EBP,ESP
0065CB03  83 EC 48                  SUB ESP,0x48
0065CB06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065CB0B  53                        PUSH EBX
0065CB0C  56                        PUSH ESI
0065CB0D  57                        PUSH EDI
0065CB0E  8D 55 BC                  LEA EDX,[EBP + -0x44]
0065CB11  8D 4D B8                  LEA ECX,[EBP + -0x48]
0065CB14  6A 00                     PUSH 0x0
0065CB16  52                        PUSH EDX
0065CB17  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0065CB1E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0065CB21  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065CB27  E8 C4 0C 0D 00            CALL 0x0072d7f0
0065CB2C  8B F0                     MOV ESI,EAX
0065CB2E  83 C4 08                  ADD ESP,0x8
0065CB31  85 F6                     TEST ESI,ESI
0065CB33  0F 85 2E 01 00 00         JNZ 0x0065cc67
0065CB39  68 9F 04 00 00            PUSH 0x49f
0065CB3E  E8 CD E0 04 00            CALL 0x006aac10
0065CB43  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0065CB46  B9 27 01 00 00            MOV ECX,0x127
0065CB4B  8B F3                     MOV ESI,EBX
0065CB4D  8B F8                     MOV EDI,EAX
0065CB4F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065CB52  F3 A5                     MOVSD.REP ES:EDI,ESI
0065CB54  66 A5                     MOVSW ES:EDI,ESI
0065CB56  A4                        MOVSB ES:EDI,ESI
0065CB57  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CB5A  C7 40 01 9F 04 00 00      MOV dword ptr [EAX + 0x1],0x49f
0065CB61  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065CB64  C6 41 05 02               MOV byte ptr [ECX + 0x5],0x2
0065CB68  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CB6B  8B 90 7A 04 00 00         MOV EDX,dword ptr [EAX + 0x47a]
0065CB71  05 6E 04 00 00            ADD EAX,0x46e
0065CB76  85 C0                     TEST EAX,EAX
0065CB78  8D B4 1A 9E 04 00 00      LEA ESI,[EDX + EBX*0x1 + 0x49e]
0065CB7F  74 07                     JZ 0x0065cb88
0065CB81  8B 00                     MOV EAX,dword ptr [EAX]
0065CB83  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0065CB86  EB 02                     JMP 0x0065cb8a
LAB_0065cb88:
0065CB88  33 C0                     XOR EAX,EAX
LAB_0065cb8a:
0065CB8A  50                        PUSH EAX
0065CB8B  E8 80 E0 04 00            CALL 0x006aac10
0065CB90  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0065CB93  89 81 76 04 00 00         MOV dword ptr [ECX + 0x476],EAX
0065CB99  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CB9C  8D 88 6E 04 00 00         LEA ECX,[EAX + 0x46e]
0065CBA2  85 C9                     TEST ECX,ECX
0065CBA4  74 07                     JZ 0x0065cbad
0065CBA6  8B 09                     MOV ECX,dword ptr [ECX]
0065CBA8  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0065CBAB  EB 02                     JMP 0x0065cbaf
LAB_0065cbad:
0065CBAD  33 C9                     XOR ECX,ECX
LAB_0065cbaf:
0065CBAF  8B B8 76 04 00 00         MOV EDI,dword ptr [EAX + 0x476]
0065CBB5  8B D1                     MOV EDX,ECX
0065CBB7  C1 E9 02                  SHR ECX,0x2
0065CBBA  F3 A5                     MOVSD.REP ES:EDI,ESI
0065CBBC  8B CA                     MOV ECX,EDX
0065CBBE  83 E1 03                  AND ECX,0x3
0065CBC1  F3 A4                     MOVSB.REP ES:EDI,ESI
0065CBC3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CBC6  8B 88 66 04 00 00         MOV ECX,dword ptr [EAX + 0x466]
0065CBCC  8D 84 19 9E 04 00 00      LEA EAX,[ECX + EBX*0x1 + 0x49e]
0065CBD3  50                        PUSH EAX
0065CBD4  6A 00                     PUSH 0x0
0065CBD6  E8 85 34 05 00            CALL 0x006b0060
0065CBDB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065CBDE  89 82 62 04 00 00         MOV dword ptr [EDX + 0x462],EAX
0065CBE4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CBE7  8B 88 5A 04 00 00         MOV ECX,dword ptr [EAX + 0x45a]
0065CBED  8D 84 19 9E 04 00 00      LEA EAX,[ECX + EBX*0x1 + 0x49e]
0065CBF4  50                        PUSH EAX
0065CBF5  6A 00                     PUSH 0x0
0065CBF7  E8 84 BA 06 00            CALL 0x006c8680
0065CBFC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0065CBFF  33 FF                     XOR EDI,EDI
0065CC01  89 82 56 04 00 00         MOV dword ptr [EDX + 0x456],EAX
0065CC07  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065CC0A  8B 88 62 04 00 00         MOV ECX,dword ptr [EAX + 0x462]
0065CC10  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0065CC13  85 D2                     TEST EDX,EDX
0065CC15  7E 40                     JLE 0x0065cc57
0065CC17  3B FA                     CMP EDI,EDX
LAB_0065cc19:
0065CC19  73 0D                     JNC 0x0065cc28
0065CC1B  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0065CC1E  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0065CC21  0F AF F7                  IMUL ESI,EDI
0065CC24  03 F2                     ADD ESI,EDX
0065CC26  EB 02                     JMP 0x0065cc2a
LAB_0065cc28:
0065CC28  33 F6                     XOR ESI,ESI
LAB_0065cc2a:
0065CC2A  8B 4E 0F                  MOV ECX,dword ptr [ESI + 0xf]
0065CC2D  85 C9                     TEST ECX,ECX
0065CC2F  74 18                     JZ 0x0065cc49
0065CC31  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
0065CC34  8D 84 18 9E 04 00 00      LEA EAX,[EAX + EBX*0x1 + 0x49e]
0065CC3B  50                        PUSH EAX
0065CC3C  6A 00                     PUSH 0x0
0065CC3E  E8 1D 34 05 00            CALL 0x006b0060
0065CC43  89 46 0F                  MOV dword ptr [ESI + 0xf],EAX
0065CC46  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0065cc49:
0065CC49  8B 88 62 04 00 00         MOV ECX,dword ptr [EAX + 0x462]
0065CC4F  47                        INC EDI
0065CC50  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
0065CC53  3B FA                     CMP EDI,EDX
0065CC55  7C C2                     JL 0x0065cc19
LAB_0065cc57:
0065CC57  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0065CC5A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065CC60  5F                        POP EDI
0065CC61  5E                        POP ESI
0065CC62  5B                        POP EBX
0065CC63  8B E5                     MOV ESP,EBP
0065CC65  5D                        POP EBP
0065CC66  C3                        RET
LAB_0065cc67:
0065CC67  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0065CC6A  8D 45 FC                  LEA EAX,[EBP + -0x4]
0065CC6D  50                        PUSH EAX
0065CC6E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0065CC74  E8 BE 48 DA FF            CALL 0x00401537
0065CC79  83 C4 04                  ADD ESP,0x4
0065CC7C  6A 4C                     PUSH 0x4c
0065CC7E  68 4C 2B 7D 00            PUSH 0x7d2b4c
0065CC83  6A 00                     PUSH 0x0
0065CC85  56                        PUSH ESI
0065CC86  E8 B5 91 04 00            CALL 0x006a5e40
0065CC8B  5F                        POP EDI
0065CC8C  5E                        POP ESI
0065CC8D  33 C0                     XOR EAX,EAX
0065CC8F  5B                        POP EBX
0065CC90  8B E5                     MOV ESP,EBP
0065CC92  5D                        POP EBP
0065CC93  C3                        RET
