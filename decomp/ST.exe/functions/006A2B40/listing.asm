FUN_006a2b40:
006A2B40  55                        PUSH EBP
006A2B41  8B EC                     MOV EBP,ESP
006A2B43  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A2B46  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A2B49  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A2B4C  50                        PUSH EAX
006A2B4D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A2B50  51                        PUSH ECX
006A2B51  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A2B54  52                        PUSH EDX
006A2B55  50                        PUSH EAX
006A2B56  51                        PUSH ECX
006A2B57  E8 E3 13 D6 FF            CALL 0x00403f3f
006A2B5C  25 FF 7F 00 00            AND EAX,0x7fff
006A2B61  50                        PUSH EAX
006A2B62  68 B4 FA 7D 00            PUSH 0x7dfab4
006A2B67  68 AC FA 7D 00            PUSH 0x7dfaac
006A2B6C  68 88 41 85 00            PUSH 0x854188
006A2B71  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
006A2B77  83 C4 24                  ADD ESP,0x24
006A2B7A  B8 88 41 85 00            MOV EAX,0x854188
006A2B7F  5D                        POP EBP
006A2B80  C3                        RET
