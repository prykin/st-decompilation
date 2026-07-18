FUN_0044e690:
0044E690  56                        PUSH ESI
0044E691  57                        PUSH EDI
0044E692  8B F1                     MOV ESI,ECX
0044E694  E8 9A 32 FB FF            CALL 0x00401933
0044E699  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0044E69F  8B CF                     MOV ECX,EDI
0044E6A1  E8 70 2C FB FF            CALL 0x00401316
0044E6A6  C7 07 00 07 79 00         MOV dword ptr [EDI],0x790700
0044E6AC  B9 23 00 00 00            MOV ECX,0x23
0044E6B1  33 C0                     XOR EAX,EAX
0044E6B3  8D BE 31 02 00 00         LEA EDI,[ESI + 0x231]
0044E6B9  C7 06 A0 05 79 00         MOV dword ptr [ESI],0x7905a0
0044E6BF  33 D2                     XOR EDX,EDX
0044E6C1  F3 AB                     STOSD.REP ES:EDI
0044E6C3  66 AB                     STOSW ES:EDI
0044E6C5  AA                        STOSB ES:EDI
0044E6C6  B9 65 00 00 00            MOV ECX,0x65
0044E6CB  33 C0                     XOR EAX,EAX
0044E6CD  8D BE C0 02 00 00         LEA EDI,[ESI + 0x2c0]
0044E6D3  F3 AB                     STOSD.REP ES:EDI
0044E6D5  AA                        STOSB ES:EDI
0044E6D6  8D 8E 55 04 00 00         LEA ECX,[ESI + 0x455]
0044E6DC  33 C0                     XOR EAX,EAX
0044E6DE  8D BE 69 04 00 00         LEA EDI,[ESI + 0x469]
0044E6E4  89 01                     MOV dword ptr [ECX],EAX
0044E6E6  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0044E6E9  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0044E6EC  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0044E6EF  B9 09 00 00 00            MOV ECX,0x9
0044E6F4  89 86 65 04 00 00         MOV dword ptr [ESI + 0x465],EAX
0044E6FA  F3 AB                     STOSD.REP ES:EDI
0044E6FC  66 AB                     STOSW ES:EDI
0044E6FE  8D 86 8F 04 00 00         LEA EAX,[ESI + 0x48f]
0044E704  B9 10 00 00 00            MOV ECX,0x10
0044E709  8D BE 9B 04 00 00         LEA EDI,[ESI + 0x49b]
0044E70F  89 10                     MOV dword ptr [EAX],EDX
0044E711  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0044E714  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
0044E717  33 C0                     XOR EAX,EAX
0044E719  F3 AB                     STOSD.REP ES:EDI
0044E71B  66 AB                     STOSW ES:EDI
0044E71D  B9 0C 00 00 00            MOV ECX,0xc
0044E722  33 C0                     XOR EAX,EAX
0044E724  8D BE DD 04 00 00         LEA EDI,[ESI + 0x4dd]
0044E72A  8D 96 CA 05 00 00         LEA EDX,[ESI + 0x5ca]
0044E730  F3 AB                     STOSD.REP ES:EDI
0044E732  66 AB                     STOSW ES:EDI
0044E734  AA                        STOSB ES:EDI
0044E735  B9 07 00 00 00            MOV ECX,0x7
0044E73A  33 C0                     XOR EAX,EAX
0044E73C  8D BE 10 05 00 00         LEA EDI,[ESI + 0x510]
0044E742  F3 AB                     STOSD.REP ES:EDI
0044E744  B9 0A 00 00 00            MOV ECX,0xa
0044E749  8D BE 2C 05 00 00         LEA EDI,[ESI + 0x52c]
0044E74F  F3 AB                     STOSD.REP ES:EDI
0044E751  B9 06 00 00 00            MOV ECX,0x6
0044E756  8D BE 88 05 00 00         LEA EDI,[ESI + 0x588]
0044E75C  F3 AB                     STOSD.REP ES:EDI
0044E75E  B9 0A 00 00 00            MOV ECX,0xa
0044E763  8D BE A0 05 00 00         LEA EDI,[ESI + 0x5a0]
0044E769  F3 AB                     STOSD.REP ES:EDI
0044E76B  33 C9                     XOR ECX,ECX
0044E76D  66 AB                     STOSW ES:EDI
0044E76F  89 0A                     MOV dword ptr [EDX],ECX
0044E771  33 C0                     XOR EAX,EAX
0044E773  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0044E776  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
0044E779  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
0044E77C  66 89 4A 10               MOV word ptr [EDX + 0x10],CX
0044E780  8D 8E DC 05 00 00         LEA ECX,[ESI + 0x5dc]
0044E786  33 D2                     XOR EDX,EDX
0044E788  89 01                     MOV dword ptr [ECX],EAX
0044E78A  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0044E78D  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0044E790  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0044E793  8D 86 EC 05 00 00         LEA EAX,[ESI + 0x5ec]
0044E799  B9 07 00 00 00            MOV ECX,0x7
0044E79E  89 10                     MOV dword ptr [EAX],EDX
0044E7A0  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0044E7A3  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
0044E7A6  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
0044E7A9  33 C0                     XOR EAX,EAX
0044E7AB  8D BE FC 05 00 00         LEA EDI,[ESI + 0x5fc]
0044E7B1  F3 AB                     STOSD.REP ES:EDI
0044E7B3  AA                        STOSB ES:EDI
0044E7B4  B9 07 00 00 00            MOV ECX,0x7
0044E7B9  33 C0                     XOR EAX,EAX
0044E7BB  8D BE 19 06 00 00         LEA EDI,[ESI + 0x619]
0044E7C1  8D 96 EB 06 00 00         LEA EDX,[ESI + 0x6eb]
0044E7C7  F3 AB                     STOSD.REP ES:EDI
0044E7C9  B9 0D 00 00 00            MOV ECX,0xd
0044E7CE  8D BE 35 06 00 00         LEA EDI,[ESI + 0x635]
0044E7D4  F3 AB                     STOSD.REP ES:EDI
0044E7D6  66 AB                     STOSW ES:EDI
0044E7D8  B9 08 00 00 00            MOV ECX,0x8
0044E7DD  33 C0                     XOR EAX,EAX
0044E7DF  8D BE 6B 06 00 00         LEA EDI,[ESI + 0x66b]
0044E7E5  F3 AB                     STOSD.REP ES:EDI
0044E7E7  B9 07 00 00 00            MOV ECX,0x7
0044E7EC  8D BE 8B 06 00 00         LEA EDI,[ESI + 0x68b]
0044E7F2  F3 AB                     STOSD.REP ES:EDI
0044E7F4  66 AB                     STOSW ES:EDI
0044E7F6  B9 08 00 00 00            MOV ECX,0x8
0044E7FB  33 C0                     XOR EAX,EAX
0044E7FD  8D BE A9 06 00 00         LEA EDI,[ESI + 0x6a9]
0044E803  F3 AB                     STOSD.REP ES:EDI
0044E805  66 AB                     STOSW ES:EDI
0044E807  B9 08 00 00 00            MOV ECX,0x8
0044E80C  33 C0                     XOR EAX,EAX
0044E80E  8D BE CB 06 00 00         LEA EDI,[ESI + 0x6cb]
0044E814  F3 AB                     STOSD.REP ES:EDI
0044E816  33 C9                     XOR ECX,ECX
0044E818  8D BE F3 06 00 00         LEA EDI,[ESI + 0x6f3]
0044E81E  89 0A                     MOV dword ptr [EDX],ECX
0044E820  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0044E823  B9 5A 00 00 00            MOV ECX,0x5a
0044E828  C7 86 5D 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x45d],0x3
0044E832  F3 AB                     STOSD.REP ES:EDI
0044E834  66 AB                     STOSW ES:EDI
0044E836  AA                        STOSB ES:EDI
0044E837  B8 64 00 00 00            MOV EAX,0x64
0044E83C  B9 01 00 00 00            MOV ECX,0x1
0044E841  89 86 16 07 00 00         MOV dword ptr [ESI + 0x716],EAX
0044E847  89 86 12 07 00 00         MOV dword ptr [ESI + 0x712],EAX
0044E84D  89 86 1A 07 00 00         MOV dword ptr [ESI + 0x71a],EAX
0044E853  89 8E 3E 07 00 00         MOV dword ptr [ESI + 0x73e],ECX
0044E859  83 C8 FF                  OR EAX,0xffffffff
0044E85C  89 8E 76 07 00 00         MOV dword ptr [ESI + 0x776],ECX
0044E862  B9 C8 00 00 00            MOV ECX,0xc8
0044E867  89 86 4A 07 00 00         MOV dword ptr [ESI + 0x74a],EAX
0044E86D  89 86 6E 07 00 00         MOV dword ptr [ESI + 0x76e],EAX
0044E873  66 89 86 F2 07 00 00      MOV word ptr [ESI + 0x7f2],AX
0044E87A  89 8E AA 07 00 00         MOV dword ptr [ESI + 0x7aa],ECX
0044E880  89 8E A6 07 00 00         MOV dword ptr [ESI + 0x7a6],ECX
0044E886  C7 86 0C 08 00 00 24 03 00 00  MOV dword ptr [ESI + 0x80c],0x324
0044E890  C7 86 10 08 00 00 C9 00 00 00  MOV dword ptr [ESI + 0x810],0xc9
0044E89A  66 C7 86 16 08 00 00 05 00  MOV word ptr [ESI + 0x816],0x5
0044E8A3  66 C7 86 14 08 00 00 ED 03  MOV word ptr [ESI + 0x814],0x3ed
0044E8AC  66 C7 86 1C 08 00 00 FF FF  MOV word ptr [ESI + 0x81c],0xffff
0044E8B5  C7 86 26 08 00 00 FE 00 00 00  MOV dword ptr [ESI + 0x826],0xfe
0044E8BF  8B C6                     MOV EAX,ESI
0044E8C1  5F                        POP EDI
0044E8C2  5E                        POP ESI
0044E8C3  C3                        RET
