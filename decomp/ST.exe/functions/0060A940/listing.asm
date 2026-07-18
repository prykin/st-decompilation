FUN_0060a940:
0060A940  55                        PUSH EBP
0060A941  8B EC                     MOV EBP,ESP
0060A943  51                        PUSH ECX
0060A944  8B 81 34 02 00 00         MOV EAX,dword ptr [ECX + 0x234]
0060A94A  53                        PUSH EBX
0060A94B  33 DB                     XOR EBX,EBX
0060A94D  57                        PUSH EDI
0060A94E  85 C0                     TEST EAX,EAX
0060A950  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0060A953  74 03                     JZ 0x0060a958
0060A955  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
LAB_0060a958:
0060A958  33 FF                     XOR EDI,EDI
0060A95A  85 DB                     TEST EBX,EBX
0060A95C  7E 3E                     JLE 0x0060a99c
0060A95E  56                        PUSH ESI
LAB_0060a95f:
0060A95F  8B 81 34 02 00 00         MOV EAX,dword ptr [ECX + 0x234]
0060A965  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
0060A968  73 2C                     JNC 0x0060a996
0060A96A  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0060A96D  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0060A970  0F AF F7                  IMUL ESI,EDI
0060A973  03 F2                     ADD ESI,EDX
0060A975  85 F6                     TEST ESI,ESI
0060A977  74 1D                     JZ 0x0060a996
0060A979  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0060A97C  85 C0                     TEST EAX,EAX
0060A97E  7C 16                     JL 0x0060a996
0060A980  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060A986  50                        PUSH EAX
0060A987  E8 14 E2 0D 00            CALL 0x006e8ba0
0060A98C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0060A98F  C7 46 3C FF FF FF FF      MOV dword ptr [ESI + 0x3c],0xffffffff
LAB_0060a996:
0060A996  47                        INC EDI
0060A997  3B FB                     CMP EDI,EBX
0060A999  7C C4                     JL 0x0060a95f
0060A99B  5E                        POP ESI
LAB_0060a99c:
0060A99C  5F                        POP EDI
0060A99D  5B                        POP EBX
0060A99E  8B E5                     MOV ESP,EBP
0060A9A0  5D                        POP EBP
0060A9A1  C3                        RET
