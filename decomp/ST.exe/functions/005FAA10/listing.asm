SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00416270::FUN_005faa10:
005FAA10  55                        PUSH EBP
005FAA11  8B EC                     MOV EBP,ESP
005FAA13  83 EC 50                  SUB ESP,0x50
005FAA16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005FAA1B  56                        PUSH ESI
005FAA1C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005FAA1F  57                        PUSH EDI
005FAA20  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005FAA23  8D 4D B0                  LEA ECX,[EBP + -0x50]
005FAA26  6A 00                     PUSH 0x0
005FAA28  52                        PUSH EDX
005FAA29  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005FAA30  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005FAA33  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005FAA39  E8 B2 2D 13 00            CALL 0x0072d7f0
005FAA3E  83 C4 08                  ADD ESP,0x8
005FAA41  85 C0                     TEST EAX,EAX
005FAA43  0F 85 6F 01 00 00         JNZ 0x005fabb8
005FAA49  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005FAA4C  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FAA52  85 C0                     TEST EAX,EAX
005FAA54  0F 84 4A 01 00 00         JZ 0x005faba4
005FAA5A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FAA5D  6A 00                     PUSH 0x0
005FAA5F  6A 00                     PUSH 0x0
005FAA61  6A 01                     PUSH 0x1
005FAA63  83 F8 01                  CMP EAX,0x1
005FAA66  6A 00                     PUSH 0x0
005FAA68  6A FF                     PUSH -0x1
005FAA6A  75 2F                     JNZ 0x005faa9b
005FAA6C  A1 74 67 80 00            MOV EAX,[0x00806774]
005FAA71  68 00 E7 7C 00            PUSH 0x7ce700
005FAA76  6A 1D                     PUSH 0x1d
005FAA78  50                        PUSH EAX
005FAA79  E8 72 F0 10 00            CALL 0x00709af0
005FAA7E  83 C4 20                  ADD ESP,0x20
005FAA81  8B F8                     MOV EDI,EAX
005FAA83  8D 45 FC                  LEA EAX,[EBP + -0x4]
005FAA86  8B 4F 0D                  MOV ECX,dword ptr [EDI + 0xd]
005FAA89  8B 57 09                  MOV EDX,dword ptr [EDI + 0x9]
005FAA8C  6A 00                     PUSH 0x0
005FAA8E  6A 08                     PUSH 0x8
005FAA90  6A 08                     PUSH 0x8
005FAA92  51                        PUSH ECX
005FAA93  52                        PUSH EDX
005FAA94  6A 00                     PUSH 0x0
005FAA96  6A 01                     PUSH 0x1
005FAA98  50                        PUSH EAX
005FAA99  EB 2E                     JMP 0x005faac9
LAB_005faa9b:
005FAA9B  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
005FAAA1  68 08 E7 7C 00            PUSH 0x7ce708
005FAAA6  6A 1D                     PUSH 0x1d
005FAAA8  51                        PUSH ECX
005FAAA9  E8 42 F0 10 00            CALL 0x00709af0
005FAAAE  83 C4 20                  ADD ESP,0x20
005FAAB1  8B F8                     MOV EDI,EAX
005FAAB3  8D 4D FC                  LEA ECX,[EBP + -0x4]
005FAAB6  8B 57 0D                  MOV EDX,dword ptr [EDI + 0xd]
005FAAB9  8B 47 09                  MOV EAX,dword ptr [EDI + 0x9]
005FAABC  6A 00                     PUSH 0x0
005FAABE  6A 2F                     PUSH 0x2f
005FAAC0  6A 5A                     PUSH 0x5a
005FAAC2  52                        PUSH EDX
005FAAC3  50                        PUSH EAX
005FAAC4  6A 00                     PUSH 0x0
005FAAC6  6A 01                     PUSH 0x1
005FAAC8  51                        PUSH ECX
LAB_005faac9:
005FAAC9  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FAACF  E8 8C DB 0E 00            CALL 0x006e8660
005FAAD4  8B 57 21                  MOV EDX,dword ptr [EDI + 0x21]
005FAAD7  8B 07                     MOV EAX,dword ptr [EDI]
005FAAD9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005FAADC  6A 01                     PUSH 0x1
005FAADE  52                        PUSH EDX
005FAADF  50                        PUSH EAX
005FAAE0  6A 00                     PUSH 0x0
005FAAE2  51                        PUSH ECX
005FAAE3  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FAAE9  E8 F2 ED 0E 00            CALL 0x006e98e0
005FAAEE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005FAAF1  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FAAF7  6A 00                     PUSH 0x0
005FAAF9  6A 00                     PUSH 0x0
005FAAFB  52                        PUSH EDX
005FAAFC  E8 6F F7 0E 00            CALL 0x006ea270
005FAB01  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FAB07  51                        PUSH ECX
005FAB08  DB 40 1C                  FILD dword ptr [EAX + 0x1c]
005FAB0B  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005FAB11  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005FAB17  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005FAB1D  D9 1C 24                  FSTP float ptr [ESP]
005FAB20  DB 40 18                  FILD dword ptr [EAX + 0x18]
005FAB23  51                        PUSH ECX
005FAB24  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005FAB2A  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005FAB30  D9 1C 24                  FSTP float ptr [ESP]
005FAB33  DB 40 14                  FILD dword ptr [EAX + 0x14]
005FAB36  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005FAB39  51                        PUSH ECX
005FAB3A  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FAB40  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005FAB46  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005FAB4C  D9 1C 24                  FSTP float ptr [ESP]
005FAB4F  50                        PUSH EAX
005FAB50  E8 0B FE 0E 00            CALL 0x006ea960
005FAB55  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005FAB58  68 30 75 00 00            PUSH 0x7530
005FAB5D  6A 00                     PUSH 0x0
005FAB5F  6A 00                     PUSH 0x0
005FAB61  6A 01                     PUSH 0x1
005FAB63  6A 00                     PUSH 0x0
005FAB65  51                        PUSH ECX
005FAB66  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FAB6C  E8 7F F3 0E 00            CALL 0x006e9ef0
005FAB71  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005FAB74  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FAB7A  6A 00                     PUSH 0x0
005FAB7C  52                        PUSH EDX
005FAB7D  E8 1E FF 0E 00            CALL 0x006eaaa0
005FAB82  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FAB88  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005FAB8B  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
005FAB8E  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005FAB91  B8 01 00 00 00            MOV EAX,0x1
005FAB96  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005FAB9C  5F                        POP EDI
005FAB9D  5E                        POP ESI
005FAB9E  8B E5                     MOV ESP,EBP
005FABA0  5D                        POP EBP
005FABA1  C2 04 00                  RET 0x4
LAB_005faba4:
005FABA4  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005FABA7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005FABAA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005FABB0  5F                        POP EDI
005FABB1  5E                        POP ESI
005FABB2  8B E5                     MOV ESP,EBP
005FABB4  5D                        POP EBP
005FABB5  C2 04 00                  RET 0x4
LAB_005fabb8:
005FABB8  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
005FABBB  5F                        POP EDI
005FABBC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005FABC1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005FABC4  5E                        POP ESI
005FABC5  8B E5                     MOV ESP,EBP
005FABC7  5D                        POP EBP
005FABC8  C2 04 00                  RET 0x4
