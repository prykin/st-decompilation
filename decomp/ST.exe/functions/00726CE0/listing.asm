FUN_00726ce0:
00726CE0  55                        PUSH EBP
00726CE1  8B EC                     MOV EBP,ESP
00726CE3  8B C1                     MOV EAX,ECX
00726CE5  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00726CE8  89 0D 8C 70 85 00         MOV dword ptr [0x0085708c],ECX
00726CEE  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
00726CF1  89 15 90 70 85 00         MOV dword ptr [0x00857090],EDX
00726CF7  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00726CFA  89 0D 7C 70 85 00         MOV dword ptr [0x0085707c],ECX
00726D00  8B 50 30                  MOV EDX,dword ptr [EAX + 0x30]
00726D03  C1 E2 10                  SHL EDX,0x10
00726D06  89 15 DC 70 85 00         MOV dword ptr [0x008570dc],EDX
00726D0C  8B 48 38                  MOV ECX,dword ptr [EAX + 0x38]
00726D0F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00726D12  C1 E1 10                  SHL ECX,0x10
00726D15  89 0D 5C 70 85 00         MOV dword ptr [0x0085705c],ECX
00726D1B  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
00726D1E  85 C9                     TEST ECX,ECX
00726D20  74 08                     JZ 0x00726d2a
00726D22  89 0D 00 71 85 00         MOV dword ptr [0x00857100],ECX
00726D28  EB 09                     JMP 0x00726d33
LAB_00726d2a:
00726D2A  8B 52 10                  MOV EDX,dword ptr [EDX + 0x10]
00726D2D  89 15 00 71 85 00         MOV dword ptr [0x00857100],EDX
LAB_00726d33:
00726D33  8B 88 80 02 00 00         MOV ECX,dword ptr [EAX + 0x280]
00726D39  85 C9                     TEST ECX,ECX
00726D3B  74 0D                     JZ 0x00726d4a
00726D3D  33 D2                     XOR EDX,EDX
00726D3F  8A 51 04                  MOV DL,byte ptr [ECX + 0x4]
00726D42  D1 E2                     SHL EDX,0x1
00726D44  89 15 9C 70 85 00         MOV dword ptr [0x0085709c],EDX
LAB_00726d4a:
00726D4A  83 B8 24 01 00 00 01      CMP dword ptr [EAX + 0x124],0x1
00726D51  75 23                     JNZ 0x00726d76
00726D53  8B 88 5C 03 00 00         MOV ECX,dword ptr [EAX + 0x35c]
00726D59  B2 02                     MOV DL,0x2
00726D5B  D1 E1                     SHL ECX,0x1
00726D5D  D2 E2                     SHL DL,CL
00726D5F  88 15 6C 70 85 00         MOV byte ptr [0x0085706c],DL
00726D65  8B 88 5C 03 00 00         MOV ECX,dword ptr [EAX + 0x35c]
00726D6B  D1 E1                     SHL ECX,0x1
00726D6D  B0 01                     MOV AL,0x1
00726D6F  D2 E0                     SHL AL,CL
00726D71  A2 58 70 85 00            MOV [0x00857058],AL
LAB_00726d76:
00726D76  5D                        POP EBP
00726D77  C2 04 00                  RET 0x4
