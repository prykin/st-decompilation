FUN_006b77e0:
006B77E0  55                        PUSH EBP
006B77E1  8B EC                     MOV EBP,ESP
006B77E3  53                        PUSH EBX
006B77E4  56                        PUSH ESI
006B77E5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B77E8  57                        PUSH EDI
006B77E9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B77EC  33 C0                     XOR EAX,EAX
006B77EE  8B DE                     MOV EBX,ESI
006B77F0  8A 07                     MOV AL,byte ptr [EDI]
006B77F2  47                        INC EDI
006B77F3  25 FF 00 00 00            AND EAX,0xff
006B77F8  50                        PUSH EAX
006B77F9  E8 32 C8 07 00            CALL 0x00734030
006B77FE  83 C4 04                  ADD ESP,0x4
006B7801  88 06                     MOV byte ptr [ESI],AL
006B7803  46                        INC ESI
006B7804  84 C0                     TEST AL,AL
006B7806  74 1A                     JZ 0x006b7822
LAB_006b7808:
006B7808  33 C0                     XOR EAX,EAX
006B780A  8A 07                     MOV AL,byte ptr [EDI]
006B780C  47                        INC EDI
006B780D  25 FF 00 00 00            AND EAX,0xff
006B7812  50                        PUSH EAX
006B7813  E8 18 C8 07 00            CALL 0x00734030
006B7818  83 C4 04                  ADD ESP,0x4
006B781B  88 06                     MOV byte ptr [ESI],AL
006B781D  46                        INC ESI
006B781E  84 C0                     TEST AL,AL
006B7820  75 E6                     JNZ 0x006b7808
LAB_006b7822:
006B7822  5F                        POP EDI
006B7823  8B C3                     MOV EAX,EBX
006B7825  5E                        POP ESI
006B7826  5B                        POP EBX
006B7827  5D                        POP EBP
006B7828  C2 08 00                  RET 0x8
