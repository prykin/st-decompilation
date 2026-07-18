FUN_006b65f0:
006B65F0  55                        PUSH EBP
006B65F1  8B EC                     MOV EBP,ESP
006B65F3  83 EC 50                  SUB ESP,0x50
006B65F6  56                        PUSH ESI
006B65F7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006B65FA  68 D0 00 00 00            PUSH 0xd0
006B65FF  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
006B6605  E8 06 46 FF FF            CALL 0x006aac10
006B660A  85 C0                     TEST EAX,EAX
006B660C  89 06                     MOV dword ptr [ESI],EAX
006B660E  75 0C                     JNZ 0x006b661c
006B6610  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B6615  5E                        POP ESI
006B6616  8B E5                     MOV ESP,EBP
006B6618  5D                        POP EBP
006B6619  C2 08 00                  RET 0x8
LAB_006b661c:
006B661C  57                        PUSH EDI
006B661D  C7 00 0A 00 00 00         MOV dword ptr [EAX],0xa
006B6623  B9 14 00 00 00            MOV ECX,0x14
006B6628  33 C0                     XOR EAX,EAX
006B662A  8D 7D B0                  LEA EDI,[EBP + -0x50]
006B662D  6A 00                     PUSH 0x0
006B662F  F3 AB                     STOSD.REP ES:EDI
006B6631  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B6634  56                        PUSH ESI
006B6635  68 30 65 6B 00            PUSH 0x6b6530
006B663A  C7 45 B0 50 00 00 00      MOV dword ptr [EBP + -0x50],0x50
006B6641  8D 48 08                  LEA ECX,[EAX + 0x8]
006B6644  8B 00                     MOV EAX,dword ptr [EAX]
006B6646  6A 00                     PUSH 0x0
006B6648  8B 11                     MOV EDX,dword ptr [ECX]
006B664A  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006B664D  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006B6650  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006B6653  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006B6656  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006B6659  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
006B665C  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006B665F  8B 10                     MOV EDX,dword ptr [EAX]
006B6661  8D 4D B0                  LEA ECX,[EBP + -0x50]
006B6664  51                        PUSH ECX
006B6665  50                        PUSH EAX
006B6666  FF 52 34                  CALL dword ptr [EDX + 0x34]
006B6669  8B F0                     MOV ESI,EAX
006B666B  5F                        POP EDI
006B666C  85 F6                     TEST ESI,ESI
006B666E  74 20                     JZ 0x006b6690
006B6670  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006B6676  68 83 01 00 00            PUSH 0x183
006B667B  68 C4 DB 7E 00            PUSH 0x7edbc4
006B6680  52                        PUSH EDX
006B6681  56                        PUSH ESI
006B6682  E8 B9 F7 FE FF            CALL 0x006a5e40
006B6687  8B C6                     MOV EAX,ESI
006B6689  5E                        POP ESI
006B668A  8B E5                     MOV ESP,EBP
006B668C  5D                        POP EBP
006B668D  C2 08 00                  RET 0x8
LAB_006b6690:
006B6690  33 C0                     XOR EAX,EAX
006B6692  5E                        POP ESI
006B6693  8B E5                     MOV ESP,EBP
006B6695  5D                        POP EBP
006B6696  C2 08 00                  RET 0x8
