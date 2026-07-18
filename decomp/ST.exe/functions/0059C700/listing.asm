FSGSTy::LoginCtrls:
0059C700  55                        PUSH EBP
0059C701  8B EC                     MOV EBP,ESP
0059C703  81 EC D4 08 00 00         SUB ESP,0x8d4
0059C709  56                        PUSH ESI
0059C70A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059C70D  57                        PUSH EDI
0059C70E  B9 23 02 00 00            MOV ECX,0x223
0059C713  33 C0                     XOR EAX,EAX
0059C715  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
0059C71B  F3 AB                     STOSD.REP ES:EDI
0059C71D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059C722  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059C725  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059C728  6A 00                     PUSH 0x0
0059C72A  52                        PUSH EDX
0059C72B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059C72E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059C734  E8 B7 10 19 00            CALL 0x0072d7f0
0059C739  8B F0                     MOV ESI,EAX
0059C73B  83 C4 08                  ADD ESP,0x8
0059C73E  85 F6                     TEST ESI,ESI
0059C740  0F 85 C0 01 00 00         JNZ 0x0059c906
0059C746  6A 01                     PUSH 0x1
0059C748  6A 01                     PUSH 0x1
0059C74A  50                        PUSH EAX
0059C74B  E8 A0 8D 11 00            CALL 0x006b54f0
0059C750  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059C753  68 1D 7E 80 00            PUSH 0x807e1d
0059C758  50                        PUSH EAX
0059C759  89 86 E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EAX
0059C75F  E8 3C 93 11 00            CALL 0x006b5aa0
0059C764  6A 01                     PUSH 0x1
0059C766  6A 01                     PUSH 0x1
0059C768  6A 00                     PUSH 0x0
0059C76A  E8 81 8D 11 00            CALL 0x006b54f0
0059C76F  89 86 EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EAX
0059C775  8A 0D 5F 73 80 00         MOV CL,byte ptr [0x0080735f]
0059C77B  84 C9                     TEST CL,CL
0059C77D  B9 5D 7E 80 00            MOV ECX,0x807e5d
0059C782  75 05                     JNZ 0x0059c789
0059C784  B9 A0 16 80 00            MOV ECX,0x8016a0
LAB_0059c789:
0059C789  51                        PUSH ECX
0059C78A  50                        PUSH EAX
0059C78B  E8 10 93 11 00            CALL 0x006b5aa0
0059C790  B9 23 02 00 00            MOV ECX,0x223
0059C795  33 C0                     XOR EAX,EAX
0059C797  8D BD 2C F7 FF FF         LEA EDI,[EBP + 0xfffff72c]
0059C79D  6A 00                     PUSH 0x0
0059C79F  F3 AB                     STOSD.REP ES:EDI
0059C7A1  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
0059C7A7  8B 8E E8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ae8]
0059C7AD  89 85 34 F7 FF FF         MOV dword ptr [EBP + 0xfffff734],EAX
0059C7B3  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0059C7B6  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0059C7B9  89 85 58 F7 FF FF         MOV dword ptr [EBP + 0xfffff758],EAX
0059C7BF  89 85 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EAX
0059C7C5  B8 02 00 00 00            MOV EAX,0x2
0059C7CA  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0059C7CD  89 85 5C F7 FF FF         MOV dword ptr [EBP + 0xfffff75c],EAX
0059C7D3  89 85 7C F7 FF FF         MOV dword ptr [EBP + 0xfffff77c],EAX
0059C7D9  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059C7DF  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059C7E5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059C7E8  BF 10 00 00 00            MOV EDI,0x10
0059C7ED  50                        PUSH EAX
0059C7EE  8D 86 C4 1A 00 00         LEA EAX,[ESI + 0x1ac4]
0059C7F4  C7 85 2C F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff72c],0x1
0059C7FE  C7 85 30 F7 FF FF 89 00 00 00  MOV dword ptr [EBP + 0xfffff730],0x89
0059C808  C7 85 38 F7 FF FF D2 00 00 00  MOV dword ptr [EBP + 0xfffff738],0xd2
0059C812  C7 85 3C F7 FF FF 06 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x106
0059C81C  C7 85 40 F7 FF FF 7C 01 00 00  MOV dword ptr [EBP + 0xfffff740],0x17c
0059C826  C7 85 44 F7 FF FF 19 00 00 00  MOV dword ptr [EBP + 0xfffff744],0x19
0059C830  89 BD 48 F7 FF FF         MOV dword ptr [EBP + 0xfffff748],EDI
0059C836  C7 85 60 F7 FF FF FF 68 00 00  MOV dword ptr [EBP + 0xfffff760],0x68ff
0059C840  C7 85 80 F7 FF FF 7F 69 00 00  MOV dword ptr [EBP + 0xfffff780],0x697f
0059C84A  C7 45 A4 55 69 00 00      MOV dword ptr [EBP + -0x5c],0x6955
0059C851  8B 11                     MOV EDX,dword ptr [ECX]
0059C853  6A 00                     PUSH 0x0
0059C855  50                        PUSH EAX
0059C856  6A 06                     PUSH 0x6
0059C858  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059C85B  8B 8E EC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1aec]
0059C861  8D 85 2C F7 FF FF         LEA EAX,[EBP + 0xfffff72c]
0059C867  89 8D 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],ECX
0059C86D  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059C870  6A 00                     PUSH 0x0
0059C872  50                        PUSH EAX
0059C873  8D 86 C8 1A 00 00         LEA EAX,[ESI + 0x1ac8]
0059C879  C7 85 30 F7 FF FF A9 00 00 00  MOV dword ptr [EBP + 0xfffff730],0xa9
0059C883  C7 85 3C F7 FF FF 3D 01 00 00  MOV dword ptr [EBP + 0xfffff73c],0x13d
0059C88D  C7 85 40 F7 FF FF AA 00 00 00  MOV dword ptr [EBP + 0xfffff740],0xaa
0059C897  C7 85 44 F7 FF FF 14 00 00 00  MOV dword ptr [EBP + 0xfffff744],0x14
0059C8A1  89 BD 48 F7 FF FF         MOV dword ptr [EBP + 0xfffff748],EDI
0059C8A7  8B 11                     MOV EDX,dword ptr [ECX]
0059C8A9  6A 00                     PUSH 0x0
0059C8AB  50                        PUSH EAX
0059C8AC  6A 06                     PUSH 0x6
0059C8AE  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059C8B1  68 80 69 00 00            PUSH 0x6980
0059C8B6  68 00 69 00 00            PUSH 0x6900
0059C8BB  6A 14                     PUSH 0x14
0059C8BD  6A 16                     PUSH 0x16
0059C8BF  68 3D 01 00 00            PUSH 0x13d
0059C8C4  68 9A 01 00 00            PUSH 0x19a
0059C8C9  6A 01                     PUSH 0x1
0059C8CB  6A 03                     PUSH 0x3
0059C8CD  8B CE                     MOV ECX,ESI
0059C8CF  E8 47 6D E6 FF            CALL 0x0040361b
0059C8D4  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059C8D7  89 86 D0 1A 00 00         MOV dword ptr [ESI + 0x1ad0],EAX
0059C8DD  51                        PUSH ECX
0059C8DE  6A 00                     PUSH 0x0
0059C8E0  6A 0F                     PUSH 0xf
0059C8E2  8B CE                     MOV ECX,ESI
0059C8E4  C7 46 2D 61 00 00 00      MOV dword ptr [ESI + 0x2d],0x61
0059C8EB  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
0059C8F2  E8 89 97 14 00            CALL 0x006e6080
0059C8F7  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059C8FA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059C900  5F                        POP EDI
0059C901  5E                        POP ESI
0059C902  8B E5                     MOV ESP,EBP
0059C904  5D                        POP EBP
0059C905  C3                        RET
LAB_0059c906:
0059C906  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C909  68 E4 C2 7C 00            PUSH 0x7cc2e4
0059C90E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059C913  56                        PUSH ESI
0059C914  6A 00                     PUSH 0x0
0059C916  68 AC 05 00 00            PUSH 0x5ac
0059C91B  68 70 BF 7C 00            PUSH 0x7cbf70
0059C920  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C925  E8 A6 0B 11 00            CALL 0x006ad4d0
0059C92A  83 C4 18                  ADD ESP,0x18
0059C92D  85 C0                     TEST EAX,EAX
0059C92F  74 01                     JZ 0x0059c932
0059C931  CC                        INT3
LAB_0059c932:
0059C932  68 AC 05 00 00            PUSH 0x5ac
0059C937  68 70 BF 7C 00            PUSH 0x7cbf70
0059C93C  6A 00                     PUSH 0x0
0059C93E  56                        PUSH ESI
0059C93F  E8 FC 94 10 00            CALL 0x006a5e40
0059C944  5F                        POP EDI
0059C945  5E                        POP ESI
0059C946  8B E5                     MOV ESP,EBP
0059C948  5D                        POP EBP
0059C949  C3                        RET
