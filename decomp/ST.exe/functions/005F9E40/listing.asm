FUN_005f9e40:
005F9E40  56                        PUSH ESI
005F9E41  8B F1                     MOV ESI,ECX
005F9E43  57                        PUSH EDI
005F9E44  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9E4A  85 C0                     TEST EAX,EAX
005F9E4C  0F 84 D8 00 00 00         JZ 0x005f9f2a
005F9E52  8B 38                     MOV EDI,dword ptr [EAX]
005F9E54  85 FF                     TEST EDI,EDI
005F9E56  74 65                     JZ 0x005f9ebd
005F9E58  8B 40 20                  MOV EAX,dword ptr [EAX + 0x20]
005F9E5B  8B CF                     MOV ECX,EDI
005F9E5D  50                        PUSH EAX
005F9E5E  6A 0E                     PUSH 0xe
005F9E60  E8 FF 71 E0 FF            CALL 0x00401064
005F9E65  6A 0E                     PUSH 0xe
005F9E67  8B CF                     MOV ECX,EDI
005F9E69  E8 4E 92 E0 FF            CALL 0x004030bc
005F9E6E  8B B6 E6 02 00 00         MOV ESI,dword ptr [ESI + 0x2e6]
005F9E74  51                        PUSH ECX
005F9E75  DB 46 1C                  FILD dword ptr [ESI + 0x1c]
005F9E78  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F9E7E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F9E84  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F9E8A  D9 1C 24                  FSTP float ptr [ESP]
005F9E8D  DB 46 18                  FILD dword ptr [ESI + 0x18]
005F9E90  51                        PUSH ECX
005F9E91  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F9E97  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F9E9D  D9 1C 24                  FSTP float ptr [ESP]
005F9EA0  DB 46 14                  FILD dword ptr [ESI + 0x14]
005F9EA3  51                        PUSH ECX
005F9EA4  8B CF                     MOV ECX,EDI
005F9EA6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F9EAC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F9EB2  D9 1C 24                  FSTP float ptr [ESP]
005F9EB5  E8 1F A7 E0 FF            CALL 0x004045d9
005F9EBA  5F                        POP EDI
005F9EBB  5E                        POP ESI
005F9EBC  C3                        RET
LAB_005f9ebd:
005F9EBD  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005F9EC0  85 C9                     TEST ECX,ECX
005F9EC2  7C 66                     JL 0x005f9f2a
005F9EC4  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
005F9EC7  52                        PUSH EDX
005F9EC8  6A 00                     PUSH 0x0
005F9ECA  51                        PUSH ECX
005F9ECB  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005F9ED1  E8 9A 03 0F 00            CALL 0x006ea270
005F9ED6  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9EDC  51                        PUSH ECX
005F9EDD  DB 40 1C                  FILD dword ptr [EAX + 0x1c]
005F9EE0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F9EE6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F9EEC  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F9EF2  D9 1C 24                  FSTP float ptr [ESP]
005F9EF5  DB 40 18                  FILD dword ptr [EAX + 0x18]
005F9EF8  51                        PUSH ECX
005F9EF9  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F9EFF  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F9F05  D9 1C 24                  FSTP float ptr [ESP]
005F9F08  DB 40 14                  FILD dword ptr [EAX + 0x14]
005F9F0B  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005F9F0E  51                        PUSH ECX
005F9F0F  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005F9F15  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F9F1B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F9F21  D9 1C 24                  FSTP float ptr [ESP]
005F9F24  50                        PUSH EAX
005F9F25  E8 36 0A 0F 00            CALL 0x006ea960
LAB_005f9f2a:
005F9F2A  5F                        POP EDI
005F9F2B  5E                        POP ESI
005F9F2C  C3                        RET
