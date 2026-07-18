SettMapMTy::CreateCtrls:
005CC440  55                        PUSH EBP
005CC441  8B EC                     MOV EBP,ESP
005CC443  81 EC 7C 0A 00 00         SUB ESP,0xa7c
005CC449  53                        PUSH EBX
005CC44A  56                        PUSH ESI
005CC44B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005CC44E  57                        PUSH EDI
005CC44F  B9 23 02 00 00            MOV ECX,0x223
005CC454  33 C0                     XOR EAX,EAX
005CC456  8D BD 84 F5 FF FF         LEA EDI,[EBP + 0xfffff584]
005CC45C  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
005CC462  F3 AB                     STOSD.REP ES:EDI
005CC464  B9 16 00 00 00            MOV ECX,0x16
005CC469  8D 7D A4                  LEA EDI,[EBP + -0x5c]
005CC46C  F3 AB                     STOSD.REP ES:EDI
005CC46E  B9 54 00 00 00            MOV ECX,0x54
005CC473  8D BD 10 FE FF FF         LEA EDI,[EBP + 0xfffffe10]
005CC479  F3 AB                     STOSD.REP ES:EDI
005CC47B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CC480  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
005CC486  6A 00                     PUSH 0x0
005CC488  52                        PUSH EDX
005CC489  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
005CC48F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CC495  E8 56 13 16 00            CALL 0x0072d7f0
005CC49A  8B F0                     MOV ESI,EAX
005CC49C  83 C4 08                  ADD ESP,0x8
005CC49F  85 F6                     TEST ESI,ESI
005CC4A1  0F 85 76 02 00 00         JNZ 0x005cc71d
005CC4A7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005CC4AA  84 DB                     TEST BL,BL
005CC4AC  0F 85 AE 00 00 00         JNZ 0x005cc560
005CC4B2  B9 01 00 00 00            MOV ECX,0x1
005CC4B7  BA C8 00 00 00            MOV EDX,0xc8
005CC4BC  8D 85 14 FE FF FF         LEA EAX,[EBP + 0xfffffe14]
005CC4C2  BE 02 00 00 00            MOV ESI,0x2
005CC4C7  BB 7D 00 00 00            MOV EBX,0x7d
005CC4CC  BF DB 01 00 00            MOV EDI,0x1db
LAB_005cc4d1:
005CC4D1  89 48 FC                  MOV dword ptr [EAX + -0x4],ECX
005CC4D4  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
005CC4DA  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
005CC4DD  C7 40 14 16 00 00 00      MOV dword ptr [EAX + 0x14],0x16
005CC4E4  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
005CC4E7  89 78 0C                  MOV dword ptr [EAX + 0xc],EDI
005CC4EA  41                        INC ECX
005CC4EB  03 D3                     ADD EDX,EBX
005CC4ED  83 C0 70                  ADD EAX,0x70
005CC4F0  4E                        DEC ESI
005CC4F1  75 DE                     JNZ 0x005cc4d1
005CC4F3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005CC4F6  B8 01 00 00 00            MOV EAX,0x1
005CC4FB  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
005CC4FE  8D 8D 10 FE FF FF         LEA ECX,[EBP + 0xfffffe10]
005CC504  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005CC507  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005CC50A  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
005CC50D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005CC510  B9 02 00 00 00            MOV ECX,0x2
005CC515  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005CC518  8D 45 A4                  LEA EAX,[EBP + -0x5c]
005CC51B  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
005CC51E  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
005CC521  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005CC524  6A 00                     PUSH 0x0
005CC526  50                        PUSH EAX
005CC527  8D 86 FC 21 00 00         LEA EAX,[ESI + 0x21fc]
005CC52D  C7 45 BC 26 63 00 00      MOV dword ptr [EBP + -0x44],0x6326
005CC534  C7 45 DC 27 63 00 00      MOV dword ptr [EBP + -0x24],0x6327
005CC53B  8B 11                     MOV EDX,dword ptr [ECX]
005CC53D  6A 00                     PUSH 0x0
005CC53F  50                        PUSH EAX
005CC540  6A 05                     PUSH 0x5
005CC542  FF 52 08                  CALL dword ptr [EDX + 0x8]
005CC545  8B 8E 00 22 00 00         MOV ECX,dword ptr [ESI + 0x2200]
005CC54B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CC551  51                        PUSH ECX
005CC552  52                        PUSH EDX
005CC553  E8 D8 6E 0E 00            CALL 0x006b3430
005CC558  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005CC55B  E9 77 01 00 00            JMP 0x005cc6d7
LAB_005cc560:
005CC560  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005CC563  8A 86 E6 21 00 00         MOV AL,byte ptr [ESI + 0x21e6]
005CC569  84 C0                     TEST AL,AL
005CC56B  0F 84 DC 00 00 00         JZ 0x005cc64d
005CC571  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005CC577  E8 39 63 E3 FF            CALL 0x004028b5
005CC57C  B9 23 02 00 00            MOV ECX,0x223
005CC581  33 C0                     XOR EAX,EAX
005CC583  8D BD 84 F5 FF FF         LEA EDI,[EBP + 0xfffff584]
005CC589  F3 AB                     STOSD.REP ES:EDI
005CC58B  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CC590  C7 85 84 F5 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff584],0x1
005CC59A  C7 85 88 F5 FF FF 09 00 00 00  MOV dword ptr [EBP + 0xfffff588],0x9
005CC5A4  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
005CC5A7  C7 85 90 F5 FF FF CB 00 00 00  MOV dword ptr [EBP + 0xfffff590],0xcb
005CC5B1  89 8D 8C F5 FF FF         MOV dword ptr [EBP + 0xfffff58c],ECX
005CC5B7  C7 85 94 F5 FF FF 3F 02 00 00  MOV dword ptr [EBP + 0xfffff594],0x23f
005CC5C1  8B 90 82 06 00 00         MOV EDX,dword ptr [EAX + 0x682]
005CC5C7  05 4C 05 00 00            ADD EAX,0x54c
005CC5CC  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
005CC5CF  89 8D 98 F5 FF FF         MOV dword ptr [EBP + 0xfffff598],ECX
005CC5D5  8B 90 36 01 00 00         MOV EDX,dword ptr [EAX + 0x136]
005CC5DB  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005CC5DE  C7 85 A0 F5 FF FF 04 01 00 00  MOV dword ptr [EBP + 0xfffff5a0],0x104
005CC5E8  89 8D 9C F5 FF FF         MOV dword ptr [EBP + 0xfffff59c],ECX
005CC5EE  8B 90 3A 01 00 00         MOV EDX,dword ptr [EAX + 0x13a]
005CC5F4  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005CC5F7  89 95 A4 F5 FF FF         MOV dword ptr [EBP + 0xfffff5a4],EDX
005CC5FD  C7 85 E8 FD FF FF 00 01 00 00  MOV dword ptr [EBP + 0xfffffde8],0x100
005CC607  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005CC60A  C7 85 D8 F5 FF FF A0 C0 00 00  MOV dword ptr [EBP + 0xfffff5d8],0xc0a0
005CC614  89 95 D0 F5 FF FF         MOV dword ptr [EBP + 0xfffff5d0],EDX
005CC61A  33 D2                     XOR EDX,EDX
005CC61C  89 95 D4 F5 FF FF         MOV dword ptr [EBP + 0xfffff5d4],EDX
005CC622  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
005CC625  89 95 14 F6 FF FF         MOV dword ptr [EBP + 0xfffff614],EDX
005CC62B  52                        PUSH EDX
005CC62C  8D 95 84 F5 FF FF         LEA EDX,[EBP + 0xfffff584]
005CC632  89 BD 10 F6 FF FF         MOV dword ptr [EBP + 0xfffff610],EDI
005CC638  52                        PUSH EDX
005CC639  C7 85 18 F6 FF FF A2 C0 00 00  MOV dword ptr [EBP + 0xfffff618],0xc0a2
005CC643  8B 39                     MOV EDI,dword ptr [ECX]
005CC645  6A 00                     PUSH 0x0
005CC647  50                        PUSH EAX
005CC648  6A 06                     PUSH 0x6
005CC64A  FF 57 08                  CALL dword ptr [EDI + 0x8]
LAB_005cc64d:
005CC64D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CC652  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CC658  8B 88 58 05 00 00         MOV ECX,dword ptr [EAX + 0x558]
005CC65E  51                        PUSH ECX
005CC65F  52                        PUSH EDX
005CC660  E8 CB 6D 0E 00            CALL 0x006b3430
005CC665  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005CC66A  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005CC670  83 F9 FF                  CMP ECX,-0x1
005CC673  74 22                     JZ 0x005cc697
005CC675  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005CC67B  52                        PUSH EDX
005CC67C  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005CC682  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005CC688  52                        PUSH EDX
005CC689  6A FE                     PUSH -0x2
005CC68B  51                        PUSH ECX
005CC68C  50                        PUSH EAX
005CC68D  E8 3E 6E 0E 00            CALL 0x006b34d0
005CC692  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005cc697:
005CC697  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005CC69D  83 F9 FF                  CMP ECX,-0x1
005CC6A0  74 22                     JZ 0x005cc6c4
005CC6A2  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005CC6A8  52                        PUSH EDX
005CC6A9  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005CC6AF  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005CC6B5  52                        PUSH EDX
005CC6B6  6A FE                     PUSH -0x2
005CC6B8  51                        PUSH ECX
005CC6B9  50                        PUSH EAX
005CC6BA  E8 11 6E 0E 00            CALL 0x006b34d0
005CC6BF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005cc6c4:
005CC6C4  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005CC6CA  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005CC6D0  51                        PUSH ECX
005CC6D1  52                        PUSH EDX
005CC6D2  E8 59 6D 0E 00            CALL 0x006b3430
LAB_005cc6d7:
005CC6D7  53                        PUSH EBX
005CC6D8  8B CE                     MOV ECX,ESI
005CC6DA  E8 D6 8E E3 FF            CALL 0x004055b5
005CC6DF  84 DB                     TEST BL,BL
005CC6E1  75 25                     JNZ 0x005cc708
005CC6E3  6A 00                     PUSH 0x0
005CC6E5  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005CC6E8  6A 00                     PUSH 0x0
005CC6EA  6A 00                     PUSH 0x0
005CC6EC  6A 00                     PUSH 0x0
005CC6EE  6A 00                     PUSH 0x0
005CC6F0  6A 00                     PUSH 0x0
005CC6F2  6A 1C                     PUSH 0x1c
005CC6F4  6A 02                     PUSH 0x2
005CC6F6  68 A1 C0 00 00            PUSH 0xc0a1
005CC6FB  6A 02                     PUSH 0x2
005CC6FD  50                        PUSH EAX
005CC6FE  6A 01                     PUSH 0x1
005CC700  E8 BA 66 E3 FF            CALL 0x00402dbf
005CC705  83 C4 30                  ADD ESP,0x30
LAB_005cc708:
005CC708  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
005CC70E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CC714  5F                        POP EDI
005CC715  5E                        POP ESI
005CC716  5B                        POP EBX
005CC717  8B E5                     MOV ESP,EBP
005CC719  5D                        POP EBP
005CC71A  C2 04 00                  RET 0x4
LAB_005cc71d:
005CC71D  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
005CC723  68 B8 D2 7C 00            PUSH 0x7cd2b8
005CC728  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CC72D  56                        PUSH ESI
005CC72E  6A 00                     PUSH 0x0
005CC730  68 9D 00 00 00            PUSH 0x9d
005CC735  68 58 D2 7C 00            PUSH 0x7cd258
005CC73A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CC740  E8 8B 0D 0E 00            CALL 0x006ad4d0
005CC745  83 C4 18                  ADD ESP,0x18
005CC748  85 C0                     TEST EAX,EAX
005CC74A  74 01                     JZ 0x005cc74d
005CC74C  CC                        INT3
LAB_005cc74d:
005CC74D  68 9D 00 00 00            PUSH 0x9d
005CC752  68 58 D2 7C 00            PUSH 0x7cd258
005CC757  6A 00                     PUSH 0x0
005CC759  56                        PUSH ESI
005CC75A  E8 E1 96 0D 00            CALL 0x006a5e40
005CC75F  5F                        POP EDI
005CC760  5E                        POP ESI
005CC761  5B                        POP EBX
005CC762  8B E5                     MOV ESP,EBP
005CC764  5D                        POP EBP
005CC765  C2 04 00                  RET 0x4
