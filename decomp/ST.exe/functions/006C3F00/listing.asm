FUN_006c3f00:
006C3F00  55                        PUSH EBP
006C3F01  8B EC                     MOV EBP,ESP
006C3F03  53                        PUSH EBX
006C3F04  56                        PUSH ESI
006C3F05  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C3F08  57                        PUSH EDI
006C3F09  8D 9E 08 05 00 00         LEA EBX,[ESI + 0x508]
006C3F0F  53                        PUSH EBX
006C3F10  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C3F16  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
006C3F19  33 FF                     XOR EDI,EDI
006C3F1B  3B C7                     CMP EAX,EDI
006C3F1D  74 09                     JZ 0x006c3f28
006C3F1F  8B 08                     MOV ECX,dword ptr [EAX]
006C3F21  50                        PUSH EAX
006C3F22  FF 51 08                  CALL dword ptr [ECX + 0x8]
006C3F25  89 7E 64                  MOV dword ptr [ESI + 0x64],EDI
LAB_006c3f28:
006C3F28  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006C3F2B  3B C7                     CMP EAX,EDI
006C3F2D  74 09                     JZ 0x006c3f38
006C3F2F  8B 10                     MOV EDX,dword ptr [EAX]
006C3F31  50                        PUSH EAX
006C3F32  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C3F35  89 7E 60                  MOV dword ptr [ESI + 0x60],EDI
LAB_006c3f38:
006C3F38  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006C3F3B  3B C7                     CMP EAX,EDI
006C3F3D  74 09                     JZ 0x006c3f48
006C3F3F  8B 08                     MOV ECX,dword ptr [EAX]
006C3F41  50                        PUSH EAX
006C3F42  FF 51 08                  CALL dword ptr [ECX + 0x8]
006C3F45  89 7E 5C                  MOV dword ptr [ESI + 0x5c],EDI
LAB_006c3f48:
006C3F48  8B 46 50                  MOV EAX,dword ptr [ESI + 0x50]
006C3F4B  3B C7                     CMP EAX,EDI
006C3F4D  74 09                     JZ 0x006c3f58
006C3F4F  8B 10                     MOV EDX,dword ptr [EAX]
006C3F51  50                        PUSH EAX
006C3F52  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C3F55  89 7E 50                  MOV dword ptr [ESI + 0x50],EDI
LAB_006c3f58:
006C3F58  56                        PUSH ESI
006C3F59  E8 A2 F5 FF FF            CALL 0x006c3500
006C3F5E  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C3F61  56                        PUSH ESI
006C3F62  81 E2 FE FF FF BF         AND EDX,0xbffffffe
006C3F68  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
006C3F6B  E8 00 F6 FF FF            CALL 0x006c3570
006C3F70  53                        PUSH EBX
006C3F71  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C3F77  5F                        POP EDI
006C3F78  5E                        POP ESI
006C3F79  33 C0                     XOR EAX,EAX
006C3F7B  5B                        POP EBX
006C3F7C  5D                        POP EBP
006C3F7D  C2 04 00                  RET 0x4
