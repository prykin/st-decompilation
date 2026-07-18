FUN_004abf00:
004ABF00  55                        PUSH EBP
004ABF01  8B EC                     MOV EBP,ESP
004ABF03  83 EC 48                  SUB ESP,0x48
004ABF06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004ABF0B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004ABF0E  56                        PUSH ESI
004ABF0F  8D 55 BC                  LEA EDX,[EBP + -0x44]
004ABF12  8D 4D B8                  LEA ECX,[EBP + -0x48]
004ABF15  6A 00                     PUSH 0x0
004ABF17  52                        PUSH EDX
004ABF18  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004ABF1B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ABF21  E8 CA 18 28 00            CALL 0x0072d7f0
004ABF26  83 C4 08                  ADD ESP,0x8
004ABF29  85 C0                     TEST EAX,EAX
004ABF2B  0F 85 95 00 00 00         JNZ 0x004abfc6
004ABF31  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004ABF34  83 7E 18 FF               CMP dword ptr [ESI + 0x18],-0x1
004ABF38  75 17                     JNZ 0x004abf51
004ABF3A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004ABF3F  68 A5 00 00 00            PUSH 0xa5
004ABF44  68 38 C6 7A 00            PUSH 0x7ac638
004ABF49  50                        PUSH EAX
004ABF4A  6A FF                     PUSH -0x1
004ABF4C  E8 EF 9E 1F 00            CALL 0x006a5e40
LAB_004abf51:
004ABF51  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
004ABF54  0F BE C1                  MOVSX EAX,CL
004ABF57  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
004ABF5A  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004ABF5D  8B 14 90                  MOV EDX,dword ptr [EAX + EDX*0x4]
004ABF60  8B 42 29                  MOV EAX,dword ptr [EDX + 0x29]
004ABF63  85 C0                     TEST EAX,EAX
004ABF65  74 4E                     JZ 0x004abfb5
004ABF67  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004ABF6A  88 4E 13                  MOV byte ptr [ESI + 0x13],CL
004ABF6D  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
004ABF70  8A 46 11                  MOV AL,byte ptr [ESI + 0x11]
004ABF73  84 C0                     TEST AL,AL
004ABF75  75 2C                     JNZ 0x004abfa3
004ABF77  8A 46 10                  MOV AL,byte ptr [ESI + 0x10]
004ABF7A  56                        PUSH ESI
004ABF7B  84 C0                     TEST AL,AL
004ABF7D  75 0F                     JNZ 0x004abf8e
004ABF7F  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
004ABF82  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004ABF85  68 99 49 40 00            PUSH 0x404999
004ABF8A  51                        PUSH ECX
004ABF8B  52                        PUSH EDX
004ABF8C  EB 0D                     JMP 0x004abf9b
LAB_004abf8e:
004ABF8E  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
004ABF91  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004ABF94  68 64 5B 40 00            PUSH 0x405b64
004ABF99  50                        PUSH EAX
004ABF9A  51                        PUSH ECX
LAB_004abf9b:
004ABF9B  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004ABF9E  E8 7D D5 23 00            CALL 0x006e9520
LAB_004abfa3:
004ABFA3  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004ABFA6  33 C0                     XOR EAX,EAX
004ABFA8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004ABFAE  5E                        POP ESI
004ABFAF  8B E5                     MOV ESP,EBP
004ABFB1  5D                        POP EBP
004ABFB2  C2 08 00                  RET 0x8
LAB_004abfb5:
004ABFB5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004ABFB8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004ABFBD  33 C0                     XOR EAX,EAX
004ABFBF  5E                        POP ESI
004ABFC0  8B E5                     MOV ESP,EBP
004ABFC2  5D                        POP EBP
004ABFC3  C2 08 00                  RET 0x8
LAB_004abfc6:
004ABFC6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004ABFC9  68 A4 C6 7A 00            PUSH 0x7ac6a4
004ABFCE  68 CC 4C 7A 00            PUSH 0x7a4ccc
004ABFD3  50                        PUSH EAX
004ABFD4  6A 00                     PUSH 0x0
004ABFD6  68 AC 00 00 00            PUSH 0xac
004ABFDB  68 38 C6 7A 00            PUSH 0x7ac638
004ABFE0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004ABFE6  E8 E5 14 20 00            CALL 0x006ad4d0
004ABFEB  83 C4 18                  ADD ESP,0x18
004ABFEE  85 C0                     TEST EAX,EAX
004ABFF0  74 01                     JZ 0x004abff3
004ABFF2  CC                        INT3
LAB_004abff3:
004ABFF3  83 C8 FF                  OR EAX,0xffffffff
004ABFF6  5E                        POP ESI
004ABFF7  8B E5                     MOV ESP,EBP
004ABFF9  5D                        POP EBP
004ABFFA  C2 08 00                  RET 0x8
