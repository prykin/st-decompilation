FUN_0071ae80:
0071AE80  55                        PUSH EBP
0071AE81  8B EC                     MOV EBP,ESP
0071AE83  83 EC 50                  SUB ESP,0x50
0071AE86  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071AE8B  56                        PUSH ESI
0071AE8C  57                        PUSH EDI
0071AE8D  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0071AE90  8D 4D B0                  LEA ECX,[EBP + -0x50]
0071AE93  6A 00                     PUSH 0x0
0071AE95  52                        PUSH EDX
0071AE96  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0071AE9D  C7 45 F4 FF FF FF FF      MOV dword ptr [EBP + -0xc],0xffffffff
0071AEA4  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0071AEA7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AEAD  E8 3E 29 01 00            CALL 0x0072d7f0
0071AEB2  8B F0                     MOV ESI,EAX
0071AEB4  83 C4 08                  ADD ESP,0x8
0071AEB7  85 F6                     TEST ESI,ESI
0071AEB9  0F 85 EE 00 00 00         JNZ 0x0071afad
0071AEBF  50                        PUSH EAX
0071AEC0  50                        PUSH EAX
0071AEC1  6A 03                     PUSH 0x3
0071AEC3  50                        PUSH EAX
0071AEC4  50                        PUSH EAX
0071AEC5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071AEC8  68 00 00 00 80            PUSH 0x80000000
0071AECD  50                        PUSH EAX
0071AECE  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
0071AED4  8B F0                     MOV ESI,EAX
0071AED6  83 FE FF                  CMP ESI,-0x1
0071AED9  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0071AEDC  75 15                     JNZ 0x0071aef3
0071AEDE  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0071AEE4  6A 48                     PUSH 0x48
0071AEE6  68 C8 08 7F 00            PUSH 0x7f08c8
0071AEEB  51                        PUSH ECX
0071AEEC  6A F6                     PUSH -0xa
0071AEEE  E8 4D AF F8 FF            CALL 0x006a5e40
LAB_0071aef3:
0071AEF3  6A 00                     PUSH 0x0
0071AEF5  6A 00                     PUSH 0x0
0071AEF7  6A 00                     PUSH 0x0
0071AEF9  56                        PUSH ESI
0071AEFA  FF 15 74 BC 85 00         CALL dword ptr [0x0085bc74]
0071AF00  83 F8 FF                  CMP EAX,-0x1
0071AF03  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071AF06  75 15                     JNZ 0x0071af1d
0071AF08  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071AF0E  6A 49                     PUSH 0x49
0071AF10  68 C8 08 7F 00            PUSH 0x7f08c8
0071AF15  52                        PUSH EDX
0071AF16  6A F7                     PUSH -0x9
0071AF18  E8 23 AF F8 FF            CALL 0x006a5e40
LAB_0071af1d:
0071AF1D  6A 00                     PUSH 0x0
0071AF1F  56                        PUSH ESI
0071AF20  FF 15 34 BB 85 00         CALL dword ptr [0x0085bb34]
0071AF26  8B F8                     MOV EDI,EAX
0071AF28  83 FF FF                  CMP EDI,-0x1
0071AF2B  75 14                     JNZ 0x0071af41
0071AF2D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071AF32  6A 4A                     PUSH 0x4a
0071AF34  68 C8 08 7F 00            PUSH 0x7f08c8
0071AF39  50                        PUSH EAX
0071AF3A  6A F7                     PUSH -0x9
0071AF3C  E8 FF AE F8 FF            CALL 0x006a5e40
LAB_0071af41:
0071AF41  57                        PUSH EDI
0071AF42  E8 C9 FC F8 FF            CALL 0x006aac10
0071AF47  8D 4D F8                  LEA ECX,[EBP + -0x8]
0071AF4A  6A 00                     PUSH 0x0
0071AF4C  51                        PUSH ECX
0071AF4D  57                        PUSH EDI
0071AF4E  50                        PUSH EAX
0071AF4F  56                        PUSH ESI
0071AF50  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071AF53  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
0071AF59  85 C0                     TEST EAX,EAX
0071AF5B  75 15                     JNZ 0x0071af72
0071AF5D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071AF63  6A 4E                     PUSH 0x4e
0071AF65  68 C8 08 7F 00            PUSH 0x7f08c8
0071AF6A  52                        PUSH EDX
0071AF6B  6A F4                     PUSH -0xc
0071AF6D  E8 CE AE F8 FF            CALL 0x006a5e40
LAB_0071af72:
0071AF72  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
0071AF75  74 14                     JZ 0x0071af8b
0071AF77  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071AF7C  6A 4F                     PUSH 0x4f
0071AF7E  68 C8 08 7F 00            PUSH 0x7f08c8
0071AF83  50                        PUSH EAX
0071AF84  6A F4                     PUSH -0xc
0071AF86  E8 B5 AE F8 FF            CALL 0x006a5e40
LAB_0071af8b:
0071AF8B  56                        PUSH ESI
0071AF8C  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
0071AF92  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0071AF95  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0071AF98  85 C0                     TEST EAX,EAX
0071AF9A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AFA0  74 02                     JZ 0x0071afa4
0071AFA2  89 38                     MOV dword ptr [EAX],EDI
LAB_0071afa4:
0071AFA4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071AFA7  5F                        POP EDI
0071AFA8  5E                        POP ESI
0071AFA9  8B E5                     MOV ESP,EBP
0071AFAB  5D                        POP EBP
0071AFAC  C3                        RET
LAB_0071afad:
0071AFAD  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0071AFB0  68 F4 08 7F 00            PUSH 0x7f08f4
0071AFB5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071AFBA  56                        PUSH ESI
0071AFBB  6A 00                     PUSH 0x0
0071AFBD  6A 55                     PUSH 0x55
0071AFBF  68 C8 08 7F 00            PUSH 0x7f08c8
0071AFC4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071AFCA  E8 01 25 F9 FF            CALL 0x006ad4d0
0071AFCF  83 C4 18                  ADD ESP,0x18
0071AFD2  85 C0                     TEST EAX,EAX
0071AFD4  74 01                     JZ 0x0071afd7
0071AFD6  CC                        INT3
LAB_0071afd7:
0071AFD7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0071AFDA  83 F8 FF                  CMP EAX,-0x1
0071AFDD  74 07                     JZ 0x0071afe6
0071AFDF  50                        PUSH EAX
0071AFE0  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_0071afe6:
0071AFE6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071AFE9  85 C0                     TEST EAX,EAX
0071AFEB  74 09                     JZ 0x0071aff6
0071AFED  8D 45 FC                  LEA EAX,[EBP + -0x4]
0071AFF0  50                        PUSH EAX
0071AFF1  E8 6A 00 F9 FF            CALL 0x006ab060
LAB_0071aff6:
0071AFF6  6A 5A                     PUSH 0x5a
0071AFF8  68 C8 08 7F 00            PUSH 0x7f08c8
0071AFFD  6A 00                     PUSH 0x0
0071AFFF  56                        PUSH ESI
0071B000  E8 3B AE F8 FF            CALL 0x006a5e40
0071B005  5F                        POP EDI
0071B006  33 C0                     XOR EAX,EAX
0071B008  5E                        POP ESI
0071B009  8B E5                     MOV ESP,EBP
0071B00B  5D                        POP EBP
0071B00C  C3                        RET
