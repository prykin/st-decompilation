FUN_006a3b20:
006A3B20  55                        PUSH EBP
006A3B21  8B EC                     MOV EBP,ESP
006A3B23  51                        PUSH ECX
006A3B24  53                        PUSH EBX
006A3B25  56                        PUSH ESI
006A3B26  57                        PUSH EDI
006A3B27  89 6D FC                  MOV dword ptr [EBP + -0x4],EBP
006A3B2A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A3B2D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006A3B30  33 FF                     XOR EDI,EDI
006A3B32  C6 05 70 49 85 00 00      MOV byte ptr [0x00854970],0x0
006A3B39  85 DB                     TEST EBX,EBX
006A3B3B  7E 14                     JLE 0x006a3b51
LAB_006a3b3d:
006A3B3D  6A 04                     PUSH 0x4
006A3B3F  56                        PUSH ESI
006A3B40  FF 15 B8 BB 85 00         CALL dword ptr [0x0085bbb8]
006A3B46  85 C0                     TEST EAX,EAX
006A3B48  75 4E                     JNZ 0x006a3b98
006A3B4A  8B 36                     MOV ESI,dword ptr [ESI]
006A3B4C  47                        INC EDI
006A3B4D  3B FB                     CMP EDI,EBX
006A3B4F  7C EC                     JL 0x006a3b3d
LAB_006a3b51:
006A3B51  C7 05 F0 49 85 00 70 49 85 00  MOV dword ptr [0x008549f0],0x854970
006A3B5B  33 FF                     XOR EDI,EDI
LAB_006a3b5d:
006A3B5D  6A 08                     PUSH 0x8
006A3B5F  56                        PUSH ESI
006A3B60  FF 15 B8 BB 85 00         CALL dword ptr [0x0085bbb8]
006A3B66  85 C0                     TEST EAX,EAX
006A3B68  75 2E                     JNZ 0x006a3b98
006A3B6A  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006A3B6D  8B 0D F0 49 85 00         MOV ECX,dword ptr [0x008549f0]
006A3B73  50                        PUSH EAX
006A3B74  68 C8 C1 7E 00            PUSH 0x7ec1c8
006A3B79  51                        PUSH ECX
006A3B7A  E8 C1 D0 08 00            CALL 0x00730c40
006A3B7F  8B 15 F0 49 85 00         MOV EDX,dword ptr [0x008549f0]
006A3B85  83 C4 0C                  ADD ESP,0xc
006A3B88  03 D0                     ADD EDX,EAX
006A3B8A  47                        INC EDI
006A3B8B  89 15 F0 49 85 00         MOV dword ptr [0x008549f0],EDX
006A3B91  8B 36                     MOV ESI,dword ptr [ESI]
006A3B93  83 FF 04                  CMP EDI,0x4
006A3B96  7C C5                     JL 0x006a3b5d
LAB_006a3b98:
006A3B98  5F                        POP EDI
006A3B99  5E                        POP ESI
006A3B9A  B8 70 49 85 00            MOV EAX,0x854970
006A3B9F  5B                        POP EBX
006A3BA0  8B E5                     MOV ESP,EBP
006A3BA2  5D                        POP EBP
006A3BA3  C2 04 00                  RET 0x4
