FUN_0062f830:
0062F830  55                        PUSH EBP
0062F831  8B EC                     MOV EBP,ESP
0062F833  56                        PUSH ESI
0062F834  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0062F837  33 C0                     XOR EAX,EAX
0062F839  57                        PUSH EDI
0062F83A  8B 94 B1 E5 01 00 00      MOV EDX,dword ptr [ECX + ESI*0x4 + 0x1e5]
0062F841  85 D2                     TEST EDX,EDX
0062F843  74 7C                     JZ 0x0062f8c1
0062F845  83 B9 FA 01 00 00 02      CMP dword ptr [ECX + 0x1fa],0x2
0062F84C  74 73                     JZ 0x0062f8c1
0062F84E  8B 7A 20                  MOV EDI,dword ptr [EDX + 0x20]
0062F851  3B 7D 10                  CMP EDI,dword ptr [EBP + 0x10]
0062F854  75 6B                     JNZ 0x0062f8c1
0062F856  8B 7A 24                  MOV EDI,dword ptr [EDX + 0x24]
0062F859  3B 7D 14                  CMP EDI,dword ptr [EBP + 0x14]
0062F85C  75 63                     JNZ 0x0062f8c1
0062F85E  8B 3A                     MOV EDI,dword ptr [EDX]
0062F860  85 FF                     TEST EDI,EDI
0062F862  7E 5D                     JLE 0x0062f8c1
0062F864  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062F867  3B F8                     CMP EDI,EAX
0062F869  7E 0F                     JLE 0x0062f87a
0062F86B  2B F8                     SUB EDI,EAX
0062F86D  B8 01 00 00 00            MOV EAX,0x1
0062F872  89 3A                     MOV dword ptr [EDX],EDI
0062F874  5F                        POP EDI
0062F875  5E                        POP ESI
0062F876  5D                        POP EBP
0062F877  C2 10 00                  RET 0x10
LAB_0062f87a:
0062F87A  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
0062F880  8B 84 B1 E5 01 00 00      MOV EAX,dword ptr [ECX + ESI*0x4 + 0x1e5]
0062F887  C7 40 18 02 00 00 00      MOV dword ptr [EAX + 0x18],0x2
0062F88E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0062F893  8B 94 B1 E5 01 00 00      MOV EDX,dword ptr [ECX + ESI*0x4 + 0x1e5]
0062F89A  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0062F8A0  89 42 35                  MOV dword ptr [EDX + 0x35],EAX
0062F8A3  8B 94 B1 E5 01 00 00      MOV EDX,dword ptr [ECX + ESI*0x4 + 0x1e5]
0062F8AA  C7 42 39 0A 00 00 00      MOV dword ptr [EDX + 0x39],0xa
0062F8B1  8B 84 B1 E5 01 00 00      MOV EAX,dword ptr [ECX + ESI*0x4 + 0x1e5]
0062F8B8  C6 40 34 00               MOV byte ptr [EAX + 0x34],0x0
0062F8BC  B8 01 00 00 00            MOV EAX,0x1
LAB_0062f8c1:
0062F8C1  5F                        POP EDI
0062F8C2  5E                        POP ESI
0062F8C3  5D                        POP EBP
0062F8C4  C2 10 00                  RET 0x10
