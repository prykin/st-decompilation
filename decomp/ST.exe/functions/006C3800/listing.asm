FUN_006c3800:
006C3800  55                        PUSH EBP
006C3801  8B EC                     MOV EBP,ESP
006C3803  53                        PUSH EBX
006C3804  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006C3807  56                        PUSH ESI
006C3808  57                        PUSH EDI
006C3809  68 20 05 00 00            PUSH 0x520
006C380E  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
006C3814  E8 F7 73 FE FF            CALL 0x006aac10
006C3819  8B F0                     MOV ESI,EAX
006C381B  85 F6                     TEST ESI,ESI
006C381D  75 0C                     JNZ 0x006c382b
006C381F  5F                        POP EDI
006C3820  5E                        POP ESI
006C3821  B8 FE FF FF FF            MOV EAX,0xfffffffe
006C3826  5B                        POP EBX
006C3827  5D                        POP EBP
006C3828  C2 10 00                  RET 0x10
LAB_006c382b:
006C382B  6A 00                     PUSH 0x0
006C382D  FF 15 D0 C0 85 00         CALL dword ptr [0x0085c0d0]
006C3833  8B F8                     MOV EDI,EAX
006C3835  85 FF                     TEST EDI,EDI
006C3837  7D 25                     JGE 0x006c385e
006C3839  56                        PUSH ESI
006C383A  E8 51 26 FE FF            CALL 0x006a5e90
006C383F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006C3844  68 96 01 00 00            PUSH 0x196
006C3849  68 80 DE 7E 00            PUSH 0x7ede80
006C384E  50                        PUSH EAX
006C384F  57                        PUSH EDI
006C3850  E8 EB 25 FE FF            CALL 0x006a5e40
006C3855  8B C7                     MOV EAX,EDI
006C3857  5F                        POP EDI
006C3858  5E                        POP ESI
006C3859  5B                        POP EBX
006C385A  5D                        POP EBP
006C385B  C2 10 00                  RET 0x10
LAB_006c385e:
006C385E  8D 8E 08 05 00 00         LEA ECX,[ESI + 0x508]
006C3864  51                        PUSH ECX
006C3865  FF 15 88 BB 85 00         CALL dword ptr [0x0085bb88]
006C386B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C386E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C3871  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C3874  89 56 28                  MOV dword ptr [ESI + 0x28],EDX
006C3877  89 46 78                  MOV dword ptr [ESI + 0x78],EAX
006C387A  89 8E 80 00 00 00         MOV dword ptr [ESI + 0x80],ECX
006C3880  8B 15 D0 68 85 00         MOV EDX,dword ptr [0x008568d0]
006C3886  50                        PUSH EAX
006C3887  52                        PUSH EDX
006C3888  E8 43 00 00 00            CALL 0x006c38d0
006C388D  85 C0                     TEST EAX,EAX
006C388F  74 08                     JZ 0x006c3899
006C3891  8B 80 88 00 00 00         MOV EAX,dword ptr [EAX + 0x88]
006C3897  EB 11                     JMP 0x006c38aa
LAB_006c3899:
006C3899  8B 4E 78                  MOV ECX,dword ptr [ESI + 0x78]
006C389C  68 F0 38 6C 00            PUSH 0x6c38f0
006C38A1  6A FC                     PUSH -0x4
006C38A3  51                        PUSH ECX
006C38A4  FF 15 60 BE 85 00         CALL dword ptr [0x0085be60]
LAB_006c38aa:
006C38AA  89 86 88 00 00 00         MOV dword ptr [ESI + 0x88],EAX
006C38B0  8B 15 D0 68 85 00         MOV EDX,dword ptr [0x008568d0]
006C38B6  89 16                     MOV dword ptr [ESI],EDX
006C38B8  89 35 D0 68 85 00         MOV dword ptr [0x008568d0],ESI
006C38BE  89 33                     MOV dword ptr [EBX],ESI
006C38C0  5F                        POP EDI
006C38C1  5E                        POP ESI
006C38C2  33 C0                     XOR EAX,EAX
006C38C4  5B                        POP EBX
006C38C5  5D                        POP EBP
006C38C6  C2 10 00                  RET 0x10
