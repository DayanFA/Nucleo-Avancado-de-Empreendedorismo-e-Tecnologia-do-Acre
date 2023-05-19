import React, {useState} from 'react'
import {View, Text, StyleSheet, Image} from 'react-native'
const trabalho = () => {
    return(
     <View style={styles.background}>
     <Text style={styles.texto}> Sobre </Text> 
     <Image source={require('./assets/img.jpg')} style={styles.img}></Image>
     <Text style={styles.texto1}>Introdução a desenvolvimento mobile</Text>
     <Text style={styles.texto2}>Discente:Dayan Freitas Alves</Text>
     <Text style={styles.texto3}>Prof.: Ítalo Campos de Melo Silva</Text>
     </View> 
    )
}

    export default trabalho;

             const styles = StyleSheet.create ({
                 background:{ flex: 1,
                     justifyContent: "center",
                     alignItems:'center'
                 },
                 img: {
                     width:200,
                     height:200,
                     resizeMode:'center',
                     marginBottom:150,
                     borderRadius:200
                 },
                 texto:{
                    fontSize:35,
                    margin:30,
                    fontWeight:'bold'
                },   
                 texto1:{
                     fontSize:20,
                     fontWeight:'bold',
                     alignItems:'center',
                     marginTop: 50
                 },    
                 texto2:{
                     fontSize:15,
                 },
                 texto3:{
                  fontSize:15,
                  marginBottom:100
                 }
             })
