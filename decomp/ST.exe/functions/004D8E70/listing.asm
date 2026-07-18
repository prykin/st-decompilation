FUN_004d8e70:
004D8E70  55                        PUSH EBP
004D8E71  8B EC                     MOV EBP,ESP
004D8E73  51                        PUSH ECX
004D8E74  56                        PUSH ESI
004D8E75  8B F1                     MOV ESI,ECX
004D8E77  57                        PUSH EDI
004D8E78  33 FF                     XOR EDI,EDI
004D8E7A  8B 86 EC 04 00 00         MOV EAX,dword ptr [ESI + 0x4ec]
004D8E80  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004D8E83  83 F8 64                  CMP EAX,0x64
004D8E86  0F 8C A6 00 00 00         JL 0x004d8f32
004D8E8C  8B 86 F0 04 00 00         MOV EAX,dword ptr [ESI + 0x4f0]
004D8E92  3B C7                     CMP EAX,EDI
004D8E94  75 44                     JNZ 0x004d8eda
004D8E96  B8 01 00 00 00            MOV EAX,0x1
004D8E9B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004D8E9E  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004D8EA4  89 86 61 02 00 00         MOV dword ptr [ESI + 0x261],EAX
004D8EAA  8B 86 65 02 00 00         MOV EAX,dword ptr [ESI + 0x265]
004D8EB0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004D8EB3  0C 02                     OR AL,0x2
004D8EB5  5F                        POP EDI
004D8EB6  89 86 65 02 00 00         MOV dword ptr [ESI + 0x265],EAX
004D8EBC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D8EBF  89 86 A5 02 00 00         MOV dword ptr [ESI + 0x2a5],EAX
004D8EC5  89 8E A9 02 00 00         MOV dword ptr [ESI + 0x2a9],ECX
004D8ECB  89 96 AD 02 00 00         MOV dword ptr [ESI + 0x2ad],EDX
004D8ED1  33 C0                     XOR EAX,EAX
004D8ED3  5E                        POP ESI
004D8ED4  8B E5                     MOV ESP,EBP
004D8ED6  5D                        POP EBP
004D8ED7  C2 0C 00                  RET 0xc
LAB_004d8eda:
004D8EDA  8D 4D FC                  LEA ECX,[EBP + -0x4]
004D8EDD  51                        PUSH ECX
004D8EDE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D8EE4  50                        PUSH EAX
004D8EE5  E8 E6 D3 20 00            CALL 0x006e62d0
004D8EEA  85 C0                     TEST EAX,EAX
004D8EEC  75 38                     JNZ 0x004d8f26
004D8EEE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004D8EF1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004D8EF4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004D8EF7  52                        PUSH EDX
004D8EF8  50                        PUSH EAX
004D8EF9  E8 F5 92 F2 FF            CALL 0x004021f3
004D8EFE  89 BE EC 04 00 00         MOV dword ptr [ESI + 0x4ec],EDI
004D8F04  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D8F0A  33 C0                     XOR EAX,EAX
004D8F0C  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004D8F12  89 96 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDX
004D8F18  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
004D8F1E  5F                        POP EDI
004D8F1F  5E                        POP ESI
004D8F20  8B E5                     MOV ESP,EBP
004D8F22  5D                        POP EBP
004D8F23  C2 0C 00                  RET 0xc
LAB_004d8f26:
004D8F26  89 BE F0 04 00 00         MOV dword ptr [ESI + 0x4f0],EDI
004D8F2C  89 BE 61 02 00 00         MOV dword ptr [ESI + 0x261],EDI
LAB_004d8f32:
004D8F32  5F                        POP EDI
004D8F33  33 C0                     XOR EAX,EAX
004D8F35  5E                        POP ESI
004D8F36  8B E5                     MOV ESP,EBP
004D8F38  5D                        POP EBP
004D8F39  C2 0C 00                  RET 0xc
