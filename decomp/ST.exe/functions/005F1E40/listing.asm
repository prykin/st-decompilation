FUN_005f1e40:
005F1E40  55                        PUSH EBP
005F1E41  8B EC                     MOV EBP,ESP
005F1E43  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
005F1E46  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005F1E49  53                        PUSH EBX
005F1E4A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005F1E4D  56                        PUSH ESI
005F1E4E  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
005F1E51  57                        PUSH EDI
005F1E52  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005F1E55  6A FF                     PUSH -0x1
005F1E57  50                        PUSH EAX
005F1E58  56                        PUSH ESI
005F1E59  57                        PUSH EDI
005F1E5A  6A 01                     PUSH 0x1
005F1E5C  52                        PUSH EDX
005F1E5D  53                        PUSH EBX
005F1E5E  E8 3C F8 E0 FF            CALL 0x0040169f
005F1E63  85 C0                     TEST EAX,EAX
005F1E65  0F 84 D3 00 00 00         JZ 0x005f1f3e
005F1E6B  85 DB                     TEST EBX,EBX
005F1E6D  75 61                     JNZ 0x005f1ed0
005F1E6F  DB 45 18                  FILD dword ptr [EBP + 0x18]
005F1E72  68 00 00 40 40            PUSH 0x40400000
005F1E77  53                        PUSH EBX
005F1E78  51                        PUSH ECX
005F1E79  8B 40 21                  MOV EAX,dword ptr [EAX + 0x21]
005F1E7C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F1E82  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F1E88  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F1E8E  D9 1C 24                  FSTP float ptr [ESP]
005F1E91  DB 45 14                  FILD dword ptr [EBP + 0x14]
005F1E94  51                        PUSH ECX
005F1E95  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F1E9B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F1EA1  D9 1C 24                  FSTP float ptr [ESP]
005F1EA4  DB 45 10                  FILD dword ptr [EBP + 0x10]
005F1EA7  51                        PUSH ECX
005F1EA8  8B 08                     MOV ECX,dword ptr [EAX]
005F1EAA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F1EB0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F1EB6  D9 1C 24                  FSTP float ptr [ESP]
005F1EB9  6A 35                     PUSH 0x35
005F1EBB  6A 5A                     PUSH 0x5a
005F1EBD  51                        PUSH ECX
005F1EBE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F1EC4  E8 37 71 0F 00            CALL 0x006e9000
005F1EC9  5F                        POP EDI
005F1ECA  5E                        POP ESI
005F1ECB  5B                        POP EBX
005F1ECC  5D                        POP EBP
005F1ECD  C2 14 00                  RET 0x14
LAB_005f1ed0:
005F1ED0  DB 45 18                  FILD dword ptr [EBP + 0x18]
005F1ED3  68 00 00 C0 40            PUSH 0x40c00000
005F1ED8  6A 00                     PUSH 0x0
005F1EDA  51                        PUSH ECX
005F1EDB  83 C6 64                  ADD ESI,0x64
005F1EDE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F1EE4  89 75 18                  MOV dword ptr [EBP + 0x18],ESI
005F1EE7  83 C7 64                  ADD EDI,0x64
005F1EEA  8B 50 21                  MOV EDX,dword ptr [EAX + 0x21]
005F1EED  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F1EF3  8B 02                     MOV EAX,dword ptr [EDX]
005F1EF5  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F1EFB  D9 1C 24                  FSTP float ptr [ESP]
005F1EFE  DB 45 18                  FILD dword ptr [EBP + 0x18]
005F1F01  51                        PUSH ECX
005F1F02  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
005F1F05  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F1F0B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F1F11  D9 1C 24                  FSTP float ptr [ESP]
005F1F14  DB 45 18                  FILD dword ptr [EBP + 0x18]
005F1F17  51                        PUSH ECX
005F1F18  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F1F1E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F1F24  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F1F2A  D9 1C 24                  FSTP float ptr [ESP]
005F1F2D  6A 56                     PUSH 0x56
005F1F2F  6A 78                     PUSH 0x78
005F1F31  50                        PUSH EAX
005F1F32  E8 C9 70 0F 00            CALL 0x006e9000
005F1F37  5F                        POP EDI
005F1F38  5E                        POP ESI
005F1F39  5B                        POP EBX
005F1F3A  5D                        POP EBP
005F1F3B  C2 14 00                  RET 0x14
LAB_005f1f3e:
005F1F3E  5F                        POP EDI
005F1F3F  5E                        POP ESI
005F1F40  33 C0                     XOR EAX,EAX
005F1F42  5B                        POP EBX
005F1F43  5D                        POP EBP
005F1F44  C2 14 00                  RET 0x14
