FUN_006adb90:
006ADB90  55                        PUSH EBP
006ADB91  8B EC                     MOV EBP,ESP
006ADB93  81 EC 00 02 00 00         SUB ESP,0x200
006ADB99  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006ADB9C  56                        PUSH ESI
006ADB9D  85 C0                     TEST EAX,EAX
006ADB9F  C6 85 00 FE FF FF 00      MOV byte ptr [EBP + 0xfffffe00],0x0
006ADBA6  74 51                     JZ 0x006adbf9
006ADBA8  8D 4D 18                  LEA ECX,[EBP + 0x18]
006ADBAB  8D 95 00 FE FF FF         LEA EDX,[EBP + 0xfffffe00]
006ADBB1  51                        PUSH ECX
006ADBB2  50                        PUSH EAX
006ADBB3  68 00 02 00 00            PUSH 0x200
006ADBB8  52                        PUSH EDX
006ADBB9  E8 22 25 08 00            CALL 0x007300e0
006ADBBE  83 C4 10                  ADD ESP,0x10
006ADBC1  85 C0                     TEST EAX,EAX
006ADBC3  7D 34                     JGE 0x006adbf9
006ADBC5  53                        PUSH EBX
006ADBC6  57                        PUSH EDI
006ADBC7  BF B4 D7 7E 00            MOV EDI,0x7ed7b4
006ADBCC  83 C9 FF                  OR ECX,0xffffffff
006ADBCF  33 C0                     XOR EAX,EAX
006ADBD1  8D 95 00 FE FF FF         LEA EDX,[EBP + 0xfffffe00]
006ADBD7  F2 AE                     SCASB.REPNE ES:EDI
006ADBD9  F7 D1                     NOT ECX
006ADBDB  2B F9                     SUB EDI,ECX
006ADBDD  8B F7                     MOV ESI,EDI
006ADBDF  8B D9                     MOV EBX,ECX
006ADBE1  8B FA                     MOV EDI,EDX
006ADBE3  83 C9 FF                  OR ECX,0xffffffff
006ADBE6  F2 AE                     SCASB.REPNE ES:EDI
006ADBE8  8B CB                     MOV ECX,EBX
006ADBEA  4F                        DEC EDI
006ADBEB  C1 E9 02                  SHR ECX,0x2
006ADBEE  F3 A5                     MOVSD.REP ES:EDI,ESI
006ADBF0  8B CB                     MOV ECX,EBX
006ADBF2  83 E1 03                  AND ECX,0x3
006ADBF5  F3 A4                     MOVSB.REP ES:EDI,ESI
006ADBF7  5F                        POP EDI
006ADBF8  5B                        POP EBX
LAB_006adbf9:
006ADBF9  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006ADBFC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006ADBFF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006ADC02  8D 85 00 FE FF FF         LEA EAX,[EBP + 0xfffffe00]
006ADC08  50                        PUSH EAX
006ADC09  68 CC 4C 7A 00            PUSH 0x7a4ccc
006ADC0E  56                        PUSH ESI
006ADC0F  6A 00                     PUSH 0x0
006ADC11  51                        PUSH ECX
006ADC12  52                        PUSH EDX
006ADC13  E8 B8 F8 FF FF            CALL 0x006ad4d0
006ADC18  83 C4 18                  ADD ESP,0x18
006ADC1B  85 C0                     TEST EAX,EAX
006ADC1D  74 01                     JZ 0x006adc20
006ADC1F  CC                        INT3
LAB_006adc20:
006ADC20  8B C6                     MOV EAX,ESI
006ADC22  5E                        POP ESI
006ADC23  8B E5                     MOV ESP,EBP
006ADC25  5D                        POP EBP
006ADC26  C3                        RET
