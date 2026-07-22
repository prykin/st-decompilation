SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00644410::sub_00645F10:
00645F10  55                        PUSH EBP
00645F11  8B EC                     MOV EBP,ESP
00645F13  83 EC 5C                  SUB ESP,0x5c
00645F16  53                        PUSH EBX
00645F17  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00645F1A  56                        PUSH ESI
00645F1B  8B F1                     MOV ESI,ECX
00645F1D  85 DB                     TEST EBX,EBX
00645F1F  0F 84 27 01 00 00         JZ 0x0064604c
00645F25  57                        PUSH EDI
00645F26  B9 16 00 00 00            MOV ECX,0x16
00645F2B  33 C0                     XOR EAX,EAX
00645F2D  8D 7D A4                  LEA EDI,[EBP + -0x5c]
00645F30  F3 AB                     STOSD.REP ES:EDI
00645F32  B8 01 00 00 00            MOV EAX,0x1
00645F37  8D 4D FC                  LEA ECX,[EBP + -0x4]
00645F3A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00645F3D  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00645F40  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00645F43  8D 55 FE                  LEA EDX,[EBP + -0x2]
00645F46  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00645F49  51                        PUSH ECX
00645F4A  8D 45 0A                  LEA EAX,[EBP + 0xa]
00645F4D  52                        PUSH EDX
00645F4E  50                        PUSH EAX
00645F4F  8B CB                     MOV ECX,EBX
00645F51  C7 45 A4 28 00 00 00      MOV dword ptr [EBP + -0x5c],0x28
00645F58  E8 86 D2 DB FF            CALL 0x004031e3
00645F5D  66 8B 4D 0A               MOV CX,word ptr [EBP + 0xa]
00645F61  66 8B 45 FC               MOV AX,word ptr [EBP + -0x4]
00645F65  66 89 4D B8               MOV word ptr [EBP + -0x48],CX
00645F69  66 8B 4B 32               MOV CX,word ptr [EBX + 0x32]
00645F6D  66 89 4D D5               MOV word ptr [EBP + -0x2b],CX
00645F71  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00645F75  66 89 4D BE               MOV word ptr [EBP + -0x42],CX
00645F79  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00645F7C  66 8B 55 FE               MOV DX,word ptr [EBP + -0x2]
00645F80  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00645F86  66 89 45 BC               MOV word ptr [EBP + -0x44],AX
00645F8A  8A 86 5D 02 00 00         MOV AL,byte ptr [ESI + 0x25d]
00645F90  66 89 55 BA               MOV word ptr [EBP + -0x46],DX
00645F94  8B 53 18                  MOV EDX,dword ptr [EBX + 0x18]
00645F97  88 45 D0                  MOV byte ptr [EBP + -0x30],AL
00645F9A  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
00645F9E  89 55 D1                  MOV dword ptr [EBP + -0x2f],EDX
00645FA1  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
00645FA5  66 89 45 C2               MOV word ptr [EBP + -0x3e],AX
00645FA9  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00645FAF  66 89 55 C0               MOV word ptr [EBP + -0x40],DX
00645FB3  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00645FB6  C1 E8 10                  SHR EAX,0x10
00645FB9  33 D2                     XOR EDX,EDX
00645FBB  B9 3D 00 00 00            MOV ECX,0x3d
00645FC0  F7 F1                     DIV ECX
00645FC2  6A 00                     PUSH 0x0
00645FC4  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
00645FC8  66 C7 45 CA 00 00         MOV word ptr [EBP + -0x36],0x0
00645FCE  66 03 96 4B 02 00 00      ADD DX,word ptr [ESI + 0x24b]
00645FD5  83 EA 1E                  SUB EDX,0x1e
00645FD8  66 89 55 C4               MOV word ptr [EBP + -0x3c],DX
00645FDC  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00645FDF  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00645FE5  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00645FEB  33 D2                     XOR EDX,EDX
00645FED  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00645FF0  C1 E8 10                  SHR EAX,0x10
00645FF3  F7 F1                     DIV ECX
00645FF5  66 03 96 4D 02 00 00      ADD DX,word ptr [ESI + 0x24d]
00645FFC  83 EA 1E                  SUB EDX,0x1e
00645FFF  66 89 55 C6               MOV word ptr [EBP + -0x3a],DX
00646003  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00646006  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0064600C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00646012  33 D2                     XOR EDX,EDX
00646014  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00646017  C1 E8 10                  SHR EAX,0x10
0064601A  F7 F1                     DIV ECX
0064601C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00646022  66 03 96 4F 02 00 00      ADD DX,word ptr [ESI + 0x24f]
00646029  83 EA 1E                  SUB EDX,0x1e
0064602C  66 89 55 C8               MOV word ptr [EBP + -0x38],DX
00646030  8B 96 59 02 00 00         MOV EDX,dword ptr [ESI + 0x259]
00646036  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00646039  8B 01                     MOV EAX,dword ptr [ECX]
0064603B  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0064603E  52                        PUSH EDX
0064603F  6A 00                     PUSH 0x0
00646041  6A 00                     PUSH 0x0
00646043  68 06 01 00 00            PUSH 0x106
00646048  FF 50 08                  CALL dword ptr [EAX + 0x8]
0064604B  5F                        POP EDI
LAB_0064604c:
0064604C  5E                        POP ESI
0064604D  5B                        POP EBX
0064604E  8B E5                     MOV ESP,EBP
00646050  5D                        POP EBP
00646051  C2 10 00                  RET 0x10
