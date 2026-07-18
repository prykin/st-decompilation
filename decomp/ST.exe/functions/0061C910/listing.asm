FUN_0061c910:
0061C910  55                        PUSH EBP
0061C911  8B EC                     MOV EBP,ESP
0061C913  51                        PUSH ECX
0061C914  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061C917  53                        PUSH EBX
0061C918  56                        PUSH ESI
0061C919  57                        PUSH EDI
0061C91A  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0061C91D  83 F8 01                  CMP EAX,0x1
0061C920  8B F1                     MOV ESI,ECX
0061C922  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0061C929  0F 84 8D 00 00 00         JZ 0x0061c9bc
0061C92F  0F 8E FD 00 00 00         JLE 0x0061ca32
0061C935  83 F8 03                  CMP EAX,0x3
0061C938  0F 8F F4 00 00 00         JG 0x0061ca32
0061C93E  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
0061C941  85 C9                     TEST ECX,ECX
0061C943  74 69                     JZ 0x0061c9ae
0061C945  8D 55 FC                  LEA EDX,[EBP + -0x4]
0061C948  8B 01                     MOV EAX,dword ptr [ECX]
0061C94A  52                        PUSH EDX
0061C94B  8D 55 26                  LEA EDX,[EBP + 0x26]
0061C94E  52                        PUSH EDX
0061C94F  8D 55 0A                  LEA EDX,[EBP + 0xa]
0061C952  52                        PUSH EDX
0061C953  8D 55 0E                  LEA EDX,[EBP + 0xe]
0061C956  52                        PUSH EDX
0061C957  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0061C95A  52                        PUSH EDX
0061C95B  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
0061C961  85 C0                     TEST EAX,EAX
0061C963  75 49                     JNZ 0x0061c9ae
0061C965  0F BF 4D 0A               MOVSX ECX,word ptr [EBP + 0xa]
0061C969  0F BF 55 26               MOVSX EDX,word ptr [EBP + 0x26]
0061C96D  0F BF 45 0E               MOVSX EAX,word ptr [EBP + 0xe]
0061C971  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0061C974  89 4E 44                  MOV dword ptr [ESI + 0x44],ECX
0061C977  83 C2 28                  ADD EDX,0x28
0061C97A  89 8E A3 00 00 00         MOV dword ptr [ESI + 0xa3],ECX
0061C980  6A 02                     PUSH 0x2
0061C982  8B CE                     MOV ECX,ESI
0061C984  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
0061C987  89 56 48                  MOV dword ptr [ESI + 0x48],EDX
0061C98A  89 7E 3C                  MOV dword ptr [ESI + 0x3c],EDI
0061C98D  89 86 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EAX
0061C993  89 96 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDX
0061C999  E8 4D 8D DE FF            CALL 0x004056eb
0061C99E  F7 D8                     NEG EAX
0061C9A0  1B C0                     SBB EAX,EAX
0061C9A2  5F                        POP EDI
0061C9A3  5E                        POP ESI
0061C9A4  83 C0 06                  ADD EAX,0x6
0061C9A7  5B                        POP EBX
0061C9A8  8B E5                     MOV ESP,EBP
0061C9AA  5D                        POP EBP
0061C9AB  C2 20 00                  RET 0x20
LAB_0061c9ae:
0061C9AE  5F                        POP EDI
0061C9AF  5E                        POP ESI
0061C9B0  B8 06 00 00 00            MOV EAX,0x6
0061C9B5  5B                        POP EBX
0061C9B6  8B E5                     MOV ESP,EBP
0061C9B8  5D                        POP EBP
0061C9B9  C2 20 00                  RET 0x20
LAB_0061c9bc:
0061C9BC  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0061C9BF  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
0061C9C2  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0061C9C5  8D 45 20                  LEA EAX,[EBP + 0x20]
0061C9C8  50                        PUSH EAX
0061C9C9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0061C9CC  51                        PUSH ECX
0061C9CD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0061C9D0  53                        PUSH EBX
0061C9D1  52                        PUSH EDX
0061C9D2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061C9D5  50                        PUSH EAX
0061C9D6  51                        PUSH ECX
0061C9D7  52                        PUSH EDX
0061C9D8  8B CE                     MOV ECX,ESI
0061C9DA  E8 CC 7C DE FF            CALL 0x004046ab
0061C9DF  85 C0                     TEST EAX,EAX
0061C9E1  74 30                     JZ 0x0061ca13
0061C9E3  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
0061C9E6  8B 4E 44                  MOV ECX,dword ptr [ESI + 0x44]
0061C9E9  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0061C9EC  89 86 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EAX
0061C9F2  89 8E A3 00 00 00         MOV dword ptr [ESI + 0xa3],ECX
0061C9F8  89 96 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDX
0061C9FE  C7 46 34 00 00 00 00      MOV dword ptr [ESI + 0x34],0x0
0061CA05  5F                        POP EDI
0061CA06  5E                        POP ESI
0061CA07  B8 01 00 00 00            MOV EAX,0x1
0061CA0C  5B                        POP EBX
0061CA0D  8B E5                     MOV ESP,EBP
0061CA0F  5D                        POP EBP
0061CA10  C2 20 00                  RET 0x20
LAB_0061ca13:
0061CA13  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0061CA16  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0061CA19  89 86 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EAX
0061CA1F  89 9E A3 00 00 00         MOV dword ptr [ESI + 0xa3],EBX
0061CA25  89 8E A7 00 00 00         MOV dword ptr [ESI + 0xa7],ECX
0061CA2B  C7 46 34 00 00 00 00      MOV dword ptr [ESI + 0x34],0x0
LAB_0061ca32:
0061CA32  8B C7                     MOV EAX,EDI
0061CA34  5F                        POP EDI
0061CA35  5E                        POP ESI
0061CA36  5B                        POP EBX
0061CA37  8B E5                     MOV ESP,EBP
0061CA39  5D                        POP EBP
0061CA3A  C2 20 00                  RET 0x20
