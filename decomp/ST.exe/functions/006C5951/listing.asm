FUN_006c5951:
006C5951  8B 65 E8                  MOV ESP,dword ptr [EBP + -0x18]
006C5954  C7 45 D8 FB FF FF FF      MOV dword ptr [EBP + -0x28],0xfffffffb
006C595B  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C5962  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_006c5965:
006C5965  56                        PUSH ESI
006C5966  E8 15 60 FF FF            CALL 0x006bb980
LAB_006c596b:
006C596B  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C5972  74 0D                     JZ 0x006c5981
006C5974  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C597A  56                        PUSH ESI
006C597B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c5981:
006C5981  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
006C5984  81 FE A0 00 76 88         CMP ESI,0x887600a0
006C598A  74 08                     JZ 0x006c5994
006C598C  81 FE AE 01 76 88         CMP ESI,0x887601ae
006C5992  75 02                     JNZ 0x006c5996
LAB_006c5994:
006C5994  33 F6                     XOR ESI,ESI
LAB_006c5996:
006C5996  85 F6                     TEST ESI,ESI
006C5998  74 2C                     JZ 0x006c59c6
006C599A  68 FF 02 00 00            PUSH 0x2ff
006C599F  68 74 DF 7E 00            PUSH 0x7edf74
006C59A4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C59AA  51                        PUSH ECX
006C59AB  56                        PUSH ESI
006C59AC  E8 8F 04 FE FF            CALL 0x006a5e40
006C59B1  8B C6                     MOV EAX,ESI
006C59B3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C59B6  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C59BD  5F                        POP EDI
006C59BE  5E                        POP ESI
006C59BF  5B                        POP EBX
006C59C0  8B E5                     MOV ESP,EBP
006C59C2  5D                        POP EBP
006C59C3  C2 18 00                  RET 0x18
LAB_006c59c6:
006C59C6  33 C0                     XOR EAX,EAX
006C59C8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C59CB  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C59D2  5F                        POP EDI
006C59D3  5E                        POP ESI
006C59D4  5B                        POP EBX
006C59D5  8B E5                     MOV ESP,EBP
006C59D7  5D                        POP EBP
006C59D8  C2 18 00                  RET 0x18
