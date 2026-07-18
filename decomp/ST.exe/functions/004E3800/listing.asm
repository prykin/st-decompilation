FUN_004e3800:
004E3800  55                        PUSH EBP
004E3801  8B EC                     MOV EBP,ESP
004E3803  53                        PUSH EBX
004E3804  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E3807  56                        PUSH ESI
004E3808  57                        PUSH EDI
004E3809  6A FF                     PUSH -0x1
004E380B  53                        PUSH EBX
004E380C  8B F1                     MOV ESI,ECX
004E380E  6A 02                     PUSH 0x2
004E3810  E8 44 E3 F1 FF            CALL 0x00401b59
004E3815  8B F8                     MOV EDI,EAX
004E3817  85 FF                     TEST EDI,EDI
004E3819  75 16                     JNZ 0x004e3831
004E381B  83 BE 61 03 00 00 02      CMP dword ptr [ESI + 0x361],0x2
004E3822  75 2E                     JNZ 0x004e3852
004E3824  39 9E 69 03 00 00         CMP dword ptr [ESI + 0x369],EBX
004E382A  75 26                     JNZ 0x004e3852
004E382C  BF 01 00 00 00            MOV EDI,0x1
LAB_004e3831:
004E3831  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E3834  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E383A  53                        PUSH EBX
004E383B  50                        PUSH EAX
004E383C  E8 2A E0 F1 FF            CALL 0x0040186b
004E3841  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E3844  49                        DEC ECX
004E3845  3B C1                     CMP EAX,ECX
004E3847  74 09                     JZ 0x004e3852
004E3849  5F                        POP EDI
004E384A  5E                        POP ESI
004E384B  33 C0                     XOR EAX,EAX
004E384D  5B                        POP EBX
004E384E  5D                        POP EBP
004E384F  C2 08 00                  RET 0x8
LAB_004e3852:
004E3852  8B C7                     MOV EAX,EDI
004E3854  5F                        POP EDI
004E3855  5E                        POP ESI
004E3856  5B                        POP EBX
004E3857  5D                        POP EBP
004E3858  C2 08 00                  RET 0x8
